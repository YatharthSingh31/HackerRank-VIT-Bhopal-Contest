/*

For a given two-dimensional integer array/list of size (N x M), print the array/list in a sine wave order, i.e, print the first column top to bottom, next column bottom to top and so on.

Input Format

The first line have the M value
Second line have N value
Third-line onwards, the next 'N' lines or rows represent the ith row values.
Each of the ith rows constitutes column values separated by a single space
Constraints

1 <= t <= 10^2
0 <= N <= 10^3
0 <= M <= 10^3
Time Limit: 1sec
Output Format

For each test case, print the elements of the two-dimensional array/list in the sine wave order in a single line, separated by a single space.
Sample Input 0

3
4 
1 2 3 4 
5 6 7 8 
9 10 11 12
Sample Output 0

1 5 9 10 6 2 3 7 11 12 8 4
Sample Input 1

5
3 
1 2 3 
4 5 6 
7 8 9 
10 11 12 
13 14 15
Sample Output 1

1 4 7 10 13 14 11 8 5 2 3 6 9 12 15 

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;
    vector<vector <int>> v(n, vector<int>(m));
    vector<vector <int>> trans(m, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[j][i] = v[i][j];
        }
    }
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
            cout<<trans[i][j]<<" ";
            }
        }
        else{
            for (int j = trans[i].size() - 1; j >= 0; j--) {
                    cout << trans[i][j] << " ";
                }
        }
        
    }
    return 0;
}
