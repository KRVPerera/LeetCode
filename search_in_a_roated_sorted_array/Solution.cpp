#include "Solution.h"
#include<vector>
#include<algorithm>

using namespace std;

int Solution::getMid(int left, int right) {
    return left + (right-left)/2;
}

int Solution::findPivot(vector<int>& nums) {
    ArraySegment arrSeg {0, nums.size()-1};
    while (true) {
        int left = arrSeg.left;
        int right = arrSeg.right;
        int mid = arrSeg.getMid();

        if (right == left) {
            return left;
        } else if (mid == left) {
            if (nums[left] > nums[right]) {
                return left;
            } else {
                return right;
            }
        }

        if (nums[mid] > nums[mid+1]) {
            return mid;
        } else if (nums[mid-1] > nums[mid]) {
            return mid - 1;
        }

        if ((right - left) < 2) {
            return right;
        }

        else if (nums[left] > nums[mid]) {
            right = mid - 2;
        } else {
            left = mid + 1;
        }

        arrSeg.left = left;
        arrSeg.right = right;
    }
}

int Solution::search(vector<int>& nums, int target) {

    if (nums.empty()) return -1;
    size_t pivot = findPivot(nums);

    if (nums[pivot] < target) return -1;
    if (nums[pivot] == target) return pivot;

    ArraySegment arrSeg {0, nums.size()-1};

    int mini = nums[pivot];
    if (pivot == arrSeg.right) {
        mini = nums[arrSeg.left];
    } else {
        mini = nums[pivot+1];
    }

    if (target < mini) return -1;

    if (nums[arrSeg.left] == target) return arrSeg.left;
    if (nums[arrSeg.right] == target) return arrSeg.right;
    if (nums[arrSeg.getMid()] == target) return arrSeg.getMid();

    if ((arrSeg.right - arrSeg.left) < 3) {
        return -1;
    }

    if (nums[arrSeg.left] < target) {
        arrSeg.right = pivot - 1;
    } else {
        arrSeg.left = pivot + 1;
    }

    while (true) {
        int left = arrSeg.left;
        int right = arrSeg.right;
        int mid = arrSeg.getMid();

        if (nums[left] == target) return left;
        if (nums[right] == target) return right;
        if (nums[mid] == target) return mid;

        if ((right - left) < 3) {
            return -1;
        }

        if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }

        arrSeg.left = left;
        arrSeg.right = right;
    }
}