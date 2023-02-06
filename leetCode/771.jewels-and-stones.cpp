/*
 * @lc app=leetcode id=771 lang=cpp
 *
 * [771] Jewels and Stones
 */

 // @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> map;

        for (auto i : stones)
        {

            map[i]++;
        }

        int count = 0;
        for (auto i : jewels)
        {

            count += map[i];

        }
        return count;


    }
};
// @lc code=end

