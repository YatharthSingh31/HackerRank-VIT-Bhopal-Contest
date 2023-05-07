/*

You are given a 0-indexed 1-dimensional (1D) integer array original, and two integers, m and n. You are tasked with creating a 2-dimensional (2D) array with m rows and n columns using all the elements from original.
The elements from indices 0 to n - 1 (inclusive) of original should form the first row of the constructed 2D array, the elements from indices n to 2 * n - 1 (inclusive) should form the second row of the constructed 2D array, and so on.
Print an m x n 2D array constructed according to the above procedure, or an empty 2D array if it is impossible.
Input Format

The first line have the N value
Second line having elements of array
Constraints

0 <= N <= 10^3
Output Format

Make 1d into 2d
Sample Input 0

4
1 2 3 4
2
2
Sample Output 0

1 2
3 4
Sample Input 1

3
1 2 3
1
3
Sample Output 1

1 2 3

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    vector<vector<int>> v;
    v.resize(m, vector<int>(n));
    int n1 = original.size();
    int c = 0;
    if (n1 != m*n) {
        return {};
    } else {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (c < original.size()) {
                    v[i][j] = original[c];
                    c++;
                } else {
                    v[i][j] = 0;
                }
            }
        }
    }
    return v;
}

int main() {
    int m, n, k;
    cin >> k;
    vector<int> v(k);
    for (int i = 0; i < k; i++) {
        cin >> v[i];
    }
    cin >> m >> n;
    vector<vector<int>> result = construct2DArray(v, m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
