#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>

using namespace std;

class Solution {
    int dp[45] = {0};
public:
    int climbStairs(int n) {
        return fib(n);
    }

    int fib(int n) {
        if (n == 0) {
            return 1;
        }
        if (n == 1) {
            return 1;
        }
        if (dp[n] != 0) {
            return dp[n];
        }

        int ans = fib(n-1) + fib(n -2);
        dp[n] = ans;
        return ans;
    }
};