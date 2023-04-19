/*
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

[4,5,6,7,0,1,2] if it was rotated 4 times. [0,1,2,4,5,6,7] if it was rotated 7 times. Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums of unique elements, return the minimum element of this array.

You must write an algorithm that runs in O(log n) time.

Input Format

First line of each test case or query contains an integer 'N' representing the size of the first array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.
Constraints

n == nums.length
1 <= n <= 5000
Output Format

Minimum element from roatated sorted array
Sample Input 0

5
3 4 5 1 2
Sample Output 0

1
Explanation 0

The original array was [1,2,3,4,5] rotated 3 times.

Sample Input 1

7
4 5 6 7 0 1 2
Sample Output 1

0
Explanation 1

The original array was [0,1,2,4,5,6,7] and it was rotated 4 times
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, min;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    min=v[0];
    for(int i=1;i<n;i++){
        if(v[i]<min){
            min=v[i];
        }
    }
    cout<<min;
    return 0;
}
