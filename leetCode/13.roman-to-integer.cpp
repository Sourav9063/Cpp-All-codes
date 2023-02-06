/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

 // @lc code=start
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int ans = 0;
        for (int i = s.size() - 2;i >= 0;i--)
        {
            if (mp[s[i]] < mp[s[i + 1]])
            {
                ans -= mp[s[i]];
            }
            else
            {
                ans += mp[s[i]];
            }
        }
        ans += mp[s[s.size() - 1]];
        return ans;

    }
};
// @lc code=end

