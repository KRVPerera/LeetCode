#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    string longestPalindrome(std::string s) {
        int bestLength = 0;
        int n = s.length();
        int best_start = 0;

        for (int mid = 0; mid < n; ++mid) {
            for (int x = 0; mid - x >= 0 && mid + x < n ; ++x) {
                const int startPos = mid - x;
                const int endPos = mid + x;
                if (s[startPos] != s[endPos]) {
                    break;
                }
                int len = 2 * x + 1;
                if (len > bestLength) {
                    bestLength = len;
                    best_start = startPos;
                }
            }
            if (bestLength == n) {
                break;
            }
        }

        for (int mid = 0; mid < n - 1; ++mid) {
            for (int x = 1; mid - x + 1 >= 0 && mid + x < n ; ++x) {
                const int startPos = mid - x + 1;
                const int endPos = mid + x;
                if (s[startPos] != s[endPos]) {
                    break;
                }
                int len = 2 * x;
                if (len > bestLength) {
                    bestLength = len;
                    best_start = startPos;
                }
            }
            if (bestLength == n) {
                break;
            }
        }

        return s.substr(best_start, bestLength);
    }
};
