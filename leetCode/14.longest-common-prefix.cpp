/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */
#include<bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans = "";
        int count = 0;
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size() - 1];
        for (size_t i = 0; i < first.size(); i++)
        {
            if (first[i] == last[i]) {
                count++;
                ans += first[i];
            }
            else {
                break;
            }
        }
        return ans;



    }
};
// @lc code=end

