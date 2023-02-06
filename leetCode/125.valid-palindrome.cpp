/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

 // @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string front = "";
        string back = "";


        for (size_t i = 0; i < s.size(); i++)
        {
            if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)) {

                front += tolower(s[i]);

            }
            if ((s[s.size() - i - 1] >= 65 && s[s.size() - i - 1] <= 90) || (s[s.size() - i - 1] >= 97 && s[s.size() - i - 1] <= 122) || (s[s.size() - i - 1] >= 48 && s[s.size() - i - 1] <= 57)) {
                back += tolower(s[s.size() - i - 1]);
            }

        }



        if (front == back) {
            return true;
        }
        return false;




    }
};
// @lc code=end

