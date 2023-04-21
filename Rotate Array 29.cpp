/*

You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

Input Format

The first line have the M value
Second line have N value
Third-line onwards, the next 'N' lines or rows represent the ith row values.
Each of the ith rows constitutes column values separated by a single space
Constraints

No

Output Format

90 degree Rotated Matrix in single line.
Sample Input 0

3
3
1 2 3
4 5 6
7 8 9
Sample Output 0

7 4 1 8 5 2 9 6 3
Sample Input 1

3
3
1 12 3
4 15 6
7 18 9
Sample Output 1

7 4 1 18 15 12 9 6 3

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>>& matrix){
    int n=matrix.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
int main() {
    int m,n;
    cin>>m;
    cin>>n;
    vector<vector<int>> v;
    vector<int> vec;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int k;
            cin>>k;
            vec.push_back(k);
        }
        
        v.push_back(vec);
        vec.clear();
    }
    rotate(v);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
    }
    return 0;
}
