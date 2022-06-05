#include<vector>
#include<algorithm>
#include<iostream>
#include<unordered_set>
#include<string>

using namespace std;

class Solution {
public:

    vector<vector<int>> threeSum(vector<int> &nums) {

        vector<vector<int>> ansVec;
//        unordered_set<string> answersSet;

        if (nums.size() < 2) {
            return ansVec;
        }
        std::sort(nums.begin(), nums.end());

//        for (auto x: nums) {
//            cout << x << " ";
//        }
//        cout << endl;

        int numSize = nums.size();

        for (int i = 0; i < numSize - 2; ++i) {
            int c = nums[i] * -1; // -c = b + a
            int left = i + 1;
            int right = numSize - 1;
            if (i > 0 && nums[i] <= nums[i - 1]) { // already populated
                continue;
            }
            while (left < right) {

                int a = nums[left];
                int b = nums[right];

                if (a + b == c) {

//                    string temp = to_string(c) + ":" + to_string(a) + ":" + to_string(b);
//                    if (answersSet.find(temp) == answersSet.end()) {
//                        answersSet.insert(temp);
//                    }
                    ansVec.push_back({-1 * c, a, b});

                    left++;
                    right--;

                    while (left < right && nums[left] == a) {
                        left++;
                    }

                    while (left < right && nums[right] == b) {
                        right--;
                    }

                } else if (c < a + b) {
                    right--;
                } else {
                    left++;
                }
            }
        }

        return ansVec;
    }
};