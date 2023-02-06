/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

 // @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int first = 0;

        for (size_t second = 1; second < nums.size(); second++)
        {
            if (nums[first] != nums[second])
            {
                first++;
                nums[first] = nums[second];
            }

        }
        return first + 1;


    }
};
// @lc code=end

