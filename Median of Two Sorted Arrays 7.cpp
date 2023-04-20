/*

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

Input Format

Line consists of 'n' space seperated integers representing the values present in the Array
Constraints

nums1.length == m
nums2.length == n
Output Format

Median of two sorted arrays
Sample Input 0

2
1 2
1
3
Sample Output 0

2.0
Sample Input 1

2
1 2
2
3 4
Sample Output 1

2.5

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int m;
    cin>>m;
    vector <int> k(m);
    for(int j=0;j<m;j++){
        cin>>k[j];
    }
    vector <float> z(n+m);
    merge(v.begin(), v.end(), k.begin(), k.end(), z.begin());
    int n1=n+m;
    sort(z.begin(), z.end());
    float median;
    int mid = n1/2;
    if(n1%2==0){
        median = (z[mid-1]+z[mid])/2.0;
    }
    else{
        median = z[mid];
    }
    cout<<fixed<<setprecision(1)<<median;
    return 0;
}
