/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

 // @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        unsigned long long int rev = 0;
        unsigned long long int tmp = x;
        if (x < 0)
            return false;
        for (int i = 0; i > -1; i++)
        {
            if (x == 0)
                break;
            rev = rev * 10 + x % 10;
            x /= 10;

        }
        return rev == tmp;


    }
};
// @lc code=end

