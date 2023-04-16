/*You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return true if you can reach the last index, or false otherwise.

Input Format

First line of each test case or query contains an integer 'N' representing the size of the first array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.
Constraints

1 <= nums.length <= 10^4
0 <= nums[i] <= 10^5
Output Format

Print true or false
Sample Input 0

5
2 3 1 1 4
Sample Output 0

true
Sample Input 1

5
3 2 1 0 4
Sample Output 1

false
Explanation 1

You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool jump(vector <int>& num){
    int n = num.size();
    int reachable =0;
    for(int i=0;i<n;i++){
        if(reachable<i){
            return false;
        }
        reachable = max(reachable, i+num[i]);
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(jump(v)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
