#include<vector>
#include<algorithm>
#include<iostream>
#include<unordered_set>
#include<string>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        ListNode *left = list1;
        ListNode *right = list2;

        if (left == nullptr) {
            return right;
        }
        if (right == nullptr) {
            return left;
        }

        ListNode *root;
        if (left->val > right->val) {
            root = new ListNode(right->val);
            right = right->next;
        } else {
            root = new ListNode(left->val);
            left = left->next;
        }

        ListNode *originalRoot = root;

        while(left != nullptr || right != nullptr) {
            if (left == nullptr) {
                root->next = new ListNode(right->val);
                right = right->next;
                root = root->next;
                continue;
            }

            if (right == nullptr) {
                root->next = new ListNode(left->val);
                left = left->next;
                root = root->next;
                continue;
            }

            if (left->val > right->val) {
                root->next = new ListNode(right->val);
                right = right->next;
            } else {
                root->next = new ListNode(left->val);
                left = left->next;
            }
            root = root->next;
        }

        return originalRoot;
    }
};