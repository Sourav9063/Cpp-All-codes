/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

 // @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char, int> smap;
        unordered_map<char, int> tmap;
        for (size_t i = 0; i < s.size(); i++)
        {
            smap[s[i]]++;
        }
        for (size_t i = 0; i < t.size(); i++)
        {
            tmap[t[i]]++;
        }
        for (auto i : smap)
        {
            if (tmap[i.first] != i.second) {
                return false;
            }
            else {
                tmap.erase(i.first);
            }


        }

        if (tmap.size() == 0) {
            return true;
        }
        else {
            return false;
        }






    }
};
// @lc code=end

