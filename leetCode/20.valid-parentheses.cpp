/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

 // @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> mp;
        mp[')'] = '(';
        mp['}'] = '{';
        mp[']'] = '[';
        // stk.push(s[0]);
        for (size_t i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stk.push(s[0]);
            }
            else {
                if (stk.top() == mp[s[i]]) {
                    stk.pop();
                }
                else {
                    return false;
                }
            }

        }

        if (stk.empty()) {
            return true;
        }
        return false;


    }
};
// @lc code=end

