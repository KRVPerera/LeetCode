//
// Created by krv on 2022-05-16.
//

#include <catch2/catch_test_macros.hpp>
#include "Solution.cpp"

using namespace std;

TEST_CASE("[3,4,6,3,4]", "[window-2]") {

    int arr[] = {3, 4, 6, 3, 4};
    int window = 2;
    vector<int> ans = {4,6,6,4};

    Solution sc;
    REQUIRE(sc.solve(arr, 5, window) == ans);
}

TEST_CASE("[3,4,5,8,1,4,10]", "[window-4]") {

    int arr[] = {3,4,5,8,1,4,10};
    int window = 4;
    vector<int> ans = {8,8,8,10};

    Solution sc;
    REQUIRE(sc.solve(arr, 7, window) == ans);
}