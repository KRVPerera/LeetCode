//
// Created by krv on 2022-05-16.
//

#include <catch2/catch_test_macros.hpp>
#include<vector>
#include "Solution.cpp"

using namespace std;

TEST_CASE("merge([1, 2, 4], [1, 3, 4])", "merge linked lists") {

    ListNode *left = new ListNode(1);
    left->next = new ListNode(2);
    left->next->next = new ListNode(4);

    ListNode *right = new ListNode(1);
    right->next = new ListNode(3);
    right->next->next = new ListNode(4);

    Solution sol;
    int answers[] = {1, 1, 2, 3, 4, 4};

    SECTION("merged") {
        ListNode * root = sol.mergeTwoLists(left, right);

        for (auto x : answers) {
            REQUIRE (root->val == x);
            root = root->next;
        }
    }
}


TEST_CASE("merge([0], [1, 3, 4])", "merge linked lists") {

    ListNode *left = new ListNode(0);

    ListNode *right = new ListNode(1);
    right->next = new ListNode(3);
    right->next->next = new ListNode(4);

    Solution sol;
    int answers[] = {0, 1, 3, 4};

    SECTION("merged") {
        ListNode * root = sol.mergeTwoLists(left, right);

        for (auto x : answers) {
            REQUIRE (root->val == x);
            root = root->next;
        }
    }
}

TEST_CASE("merge([], [1, 3, 4])", "merge linked lists") {

    ListNode *left = nullptr;

    ListNode *right = new ListNode(1);
    right->next = new ListNode(3);
    right->next->next = new ListNode(4);

    Solution sol;
    int answers[] = {1, 3, 4};

    SECTION("merged") {
        ListNode * root = sol.mergeTwoLists(left, right);

        for (auto x : answers) {
            REQUIRE (root->val == x);
            root = root->next;
        }
    }
}