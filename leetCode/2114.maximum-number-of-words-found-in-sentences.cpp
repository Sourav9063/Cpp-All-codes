/*
 * @lc app=leetcode id=2114 lang=cpp
 *
 * [2114] Maximum Number of Words Found in Sentences
 */

 // @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {

        int max = 0;

        for (int i = 0; i < sentences.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < sentences[i].size(); j++)
            {
                if (sentences[i][j] == ' ')
                {
                    count++;
                }
            }
            if (count > max)
            {
                max = count;
            }

        }

        return max + 1;

    }
};
// @lc code=end

