#include "Solution.h"
#include<vector>
#include<algorithm>

using namespace std;

int Solution::maxArea(std::vector<int> &height) {

    int maxArea = 0;
    int left = 0, right = height.size() - 1;

    for (int i = 0; i < height.size(); ++i) {
        int leftPillarHeight = height[left];
        int rightPillarHeight = height[right];

        if (left >= right) {
            return maxArea;
        }

        if (leftPillarHeight == rightPillarHeight) {
            // both are same go to next best possible
            int area = leftPillarHeight * (right - left);
            if (maxArea < area) {
                maxArea = area;
            }
            if (height[left + 1] > height[right - 1]) {
                right--;
            } else if (height[left + 1] < height[right - 1]) {
                left++;
            } else {
                left++;
            }
            continue;
        } else {
            int minHeightPillar = std::min(leftPillarHeight, rightPillarHeight);
            int area = minHeightPillar * (right - left);
            if (maxArea < area) {
                maxArea = area;
            }
            if (minHeightPillar == leftPillarHeight) {
                left++;
            } else {
                right--;
            }
        }

    }

    return maxArea;
}