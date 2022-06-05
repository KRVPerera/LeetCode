//
// Created by krv on 2022-05-16.
//

#include <catch2/catch_test_macros.hpp>
#include<vector>
#include "Solution.cpp"

using namespace std;

TEST_CASE("is_palindrome", "[palindrome]") {
    Solution sol;


    SECTION("test lcs p") {
        REQUIRE (sol.longestPalindrome("aba") == "aba");
//        REQUIRE (sol.longestPalindrome("babad") == "bab");
//        REQUIRE (sol.longestPalindrome("cbbd") == "bb");
//        REQUIRE (sol.longestPalindrome("a") == "a");
    }
}




