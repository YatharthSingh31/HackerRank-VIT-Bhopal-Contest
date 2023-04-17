/*
Given an integer array nums, find the subarray with the largest sum, and return its sum

Input Format

First line of each test case or query contains an integer 'N' representing the size of the first array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.
Constraints

1 <= nums.length <= 10^5
-10^4 <= nums[i] <= 10^4
Output Format

Maximum subarray sum

Sample Input 0

9
-2 1 -3 4 -1 2 1 -5 4
Sample Output 0

6
Explanation 0

The subarray [4,-1,2,1] has the largest sum 6.

Sample Input 1

1
1
Sample Output 1

1
Sample Input 2

5
5 4 -1 7 8
Sample Output 2

23
Explanation 2

The subarray [5,4,-1,7,8] has the largest sum 23.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int subarray(vector <int>& n){
    int sum=0;
    int maxi=n[0];
    for(auto i: n){
        sum+=i;
        maxi = max(sum, maxi);
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}

int main() {
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<subarray(v);
    return 0;
}
