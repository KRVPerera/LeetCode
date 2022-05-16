//
// Created by krv on 2022-05-16.
//

#include "LeetCode2Solution.h"
#include <string>
#include <unordered_set>

int LeetCode2Solution::lengthOfLongestSubstring(std::string s) {

    std::unordered_set<char> liveSet(s.size());

    int left = 0;
    int longestSubStringSize = 0;

    int stringSize = s.length();

    for (int i = 0; i < stringSize; ++i) {

        char current = s[i];

        while (liveSet.find(current) != liveSet.end()) {
            liveSet.erase(s[left]);
            left++;
        }

        liveSet.insert(current);

        int currentLength = i - left + 1;
        if (longestSubStringSize < currentLength) {
            longestSubStringSize = currentLength;
        }
    }

    return longestSubStringSize;
}