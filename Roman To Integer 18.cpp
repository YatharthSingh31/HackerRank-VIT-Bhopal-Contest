/*

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
Symbol Value
I 1
V 5
X 10
L 50
C 100
D 500
M 1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.
Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:
I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.
Input Format

Roman string is given to you
Constraints

0 <= N <= 10^6
Where N is the length of the input string.
Time Limit: 1 second
Output Format

Integer representing the value of that roman string
Sample Input 0

III
Sample Output 0

3
Sample Input 1

V
Sample Output 1

5

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
        unordered_map <char, int> mmap;
        mmap.insert({'I', 1});
        mmap.insert({'V', 5});
        mmap.insert({'X', 10});
        mmap.insert({'L', 50});
        mmap.insert({'C', 100});
        mmap.insert({'D', 500});
        mmap.insert({'M', 1000});
        int res = 0;
        for (int i = 0; i < s.length(); i++) {
            int val = mmap[s[i]];
            if (i == s.length() - 1 || mmap[s[i+1]] <= mmap[s[i]])
                res += val;
            else
                res -= val;
        }
        return res;
    }
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    cout<<romanToInt(s);
    return 0;
}
