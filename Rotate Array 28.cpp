/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Input Format

First line contains the value of size of your array
Line consists of 'n' space seperated integers representing the values present in the Array
Third line having the K value, how much you want to rotate
Constraints

1 <= nums.length <= 10^5
-231 <= nums[i] <= 231 - 1
0 <= k <= 10^5
Output Format

Rotated Array
Sample Input 0

7
1 2 3 4 5 6 7
3
Sample Output 0

5 6 7 1 2 3 4
Explanation 0

rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Sample Input 1

4
-1 -100 3 99
2
Sample Output 1

3 99 -1 -100
Explanation 1

rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> rotate(vector<int>& nums, int k, int n) {
     vector<int> temp(n);
     for(int i=0;i<n;i++){
         temp[(i+k)%n] = nums[i];
     }
     return temp;
}
    
int main()
{
    int n, k;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
     cin>>nums[i];
    }
    cin>>k;
    nums = rotate(nums, k, n);   
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
