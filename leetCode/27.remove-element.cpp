/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

 // @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int first = 0;

        for (size_t second = 0; second < nums.size(); second++)
        {
            if (nums[second] != val)
            {
                nums[first] = nums[second];
                first++;
            }

        }
        return first;
    }
};
// @lc code=end

