//
// Created by krv on 2022-05-16.
//

#include <catch2/catch_test_macros.hpp>
#include "LeetCode2Solution.h"

TEST_CASE( "LCS Length", "[LCS]" ) {
    LeetCode2Solution sc;
    REQUIRE( sc.lengthOfLongestSubstring("abcabcbb") == 3 );
    REQUIRE( sc.lengthOfLongestSubstring("babad") == 3 );
    REQUIRE( sc.lengthOfLongestSubstring("pwwkew") == 3 );
    REQUIRE( sc.lengthOfLongestSubstring("bbbbb") == 1 );
}