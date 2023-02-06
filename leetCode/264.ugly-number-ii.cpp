/*
 * @lc app=leetcode id=264 lang=cpp
 *
 * [264] Ugly Number II
 */

 // @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int nthUglyNumber(int n) {

        vector<int> dp(n);
        dp[0] = 1;
        int p2 = 0, p3 = 0, p5 = 0;
        for (size_t i = 1; i < n; i++)
        {
            dp[i] = min(dp[p2] * 2, min(dp[p3] * 3, dp[p5] * 5));
            if (dp[i] == dp[p2] * 2) {
                p2++;
            }
            if (dp[i] == dp[p3] * 3) {
                p3++;
            }
            if (dp[i] == dp[p5] * 5) {
                p5++;
            }
        }
        return dp[n - 1];

        // set<int> dp;
        // dp.insert(1);
        // dp.insert(2 * 1);
        // dp.insert(3 * 1);
        // dp.insert(5 * 1);
        // for (size_t i = 1; i < n; i++)
        // {
        //     if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0) {
        //         dp.insert(2 * i);
        //         dp.insert(3 * i);
        //         dp.insert(5 * i);
        //     }

        // }
        // vector<int> v;
        // for (auto i : dp)
        // {
        //     v.push_back(i);
        // }
        // return v[n - 1];

    }
};
// @lc code=end

