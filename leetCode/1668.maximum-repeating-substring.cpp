/*
 * @lc app=leetcode id=1668 lang=cpp
 *
 * [1668] Maximum Repeating Substring
 */

 // @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int count = 0;
        string temp = word;
        while (sequence.find(temp) != -1)
        {
            count++;
            temp += word;
        }
        return count;

    }
};
// @lc code=end

