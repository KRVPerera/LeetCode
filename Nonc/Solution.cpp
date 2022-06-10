#include <unordered_set>
#include <vector>
#include <catch2/catch_test_macros.hpp>

using namespace std;

bool canSum(int n, vector<int> coins, unordered_set<int> skipIndexes, int skip) {
    if (n == 0) return true;
    if (n < 0) return false;

    for (int j = 0; j < coins.size(); j++) {
        if (!skipIndexes.insert(j).second) {
            continue;
        }
        if (canSum(n - coins[j], coins, skipIndexes, j)) {
            return true;
        }
    }

    return false;
}


int nonConstructibleChange(vector<int> coins) {
    int i = 1;
    unordered_set<int> skipIndexes;
    while(canSum(i, coins, skipIndexes, -1)) {
        i++;
    }
    return i;
}

TEST_CASE( "isValidSubsequence Length", "[Not in Order]" ) {
    REQUIRE( nonConstructibleChange({1,3}) == 2 );
    REQUIRE( nonConstructibleChange({1,2,3}) == 7);
}