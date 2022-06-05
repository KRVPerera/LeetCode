//
// Created by krv on 2022-05-16.
//

#include <catch2/catch_test_macros.hpp>
#include<vector>
#include "Solution.h"

using namespace std;

TEST_CASE("max container [5, 6, 7, 8, 0, 1, 2, 3, 4]", "[two pointer solution]") {
    std::vector<int> vrc{1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution sol;

    SECTION("when: Not sorted") {
        CAPTURE(vrc);
        REQUIRE (sol.maxArea(vrc) == 49);
    }
}

TEST_CASE("max container [1, 8, 6, 2, 5]", "[two pointer solution]") {
    std::vector<int> vrc{1, 8, 6, 2, 5};
    Solution sol;

    SECTION("when: Not sorted") {
        CAPTURE(vrc);
        REQUIRE (sol.maxArea(vrc) == 15);
    }
}

TEST_CASE("max container [1, 1]", "[two pointer solution]") {
    std::vector<int> vrc{1, 1};
    Solution sol;

    SECTION("when: Not sorted") {
        CAPTURE(vrc);
        REQUIRE (sol.maxArea(vrc) == 1);
    }
}
