//
// Created by krv on 2022-05-16.
//

#include <catch2/catch_test_macros.hpp>
#include<vector>
#include "Solution.cpp"

using namespace std;

TEST_CASE("nums [-2,0,3,-1,4,0,3,4,1,1,1,-3,-5,4,0]", "[3Sum]") {
    std::vector<int> vrc{-2, 0, 3, -1, 4, 0, 3, 4, 1, 1, 1, -3, -5, 4, 0};
    vector<vector<int>> answer{
            {-5, 1,  4},
            {-3, -1, 4},
            {-3, 0,  3},
            {-2, -1, 3},
            {-2, 1,  1},
            {-1, 0,  1},
            {0,  0,  0}
    };
    Solution sol;

    SECTION("duplicates") {
        CAPTURE(vrc);
        REQUIRE (sol.threeSum(vrc) == answer);
    }
}

TEST_CASE("nums [-1, 0, 1, 2, -1, -4]", "[3Sum]") {
    std::vector<int> vrc{-1, 0, 1, 2, -1, -4};
    vector<vector<int>> answer{{-1, -1, 2},
                               {-1, 0,  1}};
    Solution sol;

    SECTION("when: Not sorted") {
        CAPTURE(vrc);
        REQUIRE (sol.threeSum(vrc) == answer);
    }
}

TEST_CASE("nums [0, 0, 0, 0]", "[3Sum]") {
    std::vector<int> vrc{-0, 0, 0, 0};
    vector<vector<int>> answer{{0, 0, 0}};
    Solution sol;

    SECTION("when: Not sorted") {
        CAPTURE(vrc);
        REQUIRE (sol.threeSum(vrc) == answer);
    }
}

TEST_CASE("nums []", "[3Sum]") {
    std::vector<int> vrc{};
    vector<vector<int>> answer{};
    Solution sol;

    SECTION("when: Not sorted") {
        CAPTURE(vrc);
        REQUIRE (sol.threeSum(vrc) == answer);
    }
}

TEST_CASE("nums [0]", "[3Sum]") {
    std::vector<int> vrc{0};
    vector<vector<int>> answer{};
    Solution sol;

    SECTION("when: Not sorted") {
        CAPTURE(vrc);
        REQUIRE (sol.threeSum(vrc) == answer);
    }
}
