//
// Created by krv on 2022-05-16.
//

#include <catch2/catch_test_macros.hpp>
#include<vector>
#include "Solution.cpp"

using namespace std;

TEST_CASE("stairs", "[fib]") {
    Solution sol;


    SECTION("test fib") {
        REQUIRE (sol.climbStairs(0) == 1);
        REQUIRE (sol.climbStairs(1) == 1);
        REQUIRE (sol.climbStairs(2) == 2);
        REQUIRE (sol.climbStairs(3) == 3);
        REQUIRE (sol.climbStairs(4) == 5);
    }
}
