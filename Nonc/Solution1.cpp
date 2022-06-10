#include <vector>
#include <catch2/catch_test_macros.hpp>

using namespace std;

int nonConstructibleChange(vector<int> coins) {
    // Write your code here.
    std::sort(coins.begin(), coins.end());

    if (coins[0] > 1) {
        return 1;
    }

    int currentSum = coins[0];
    for (int i = 1; i < coins.size(); ++i) {
        if (coins[i] > currentSum + 1) {
            return currentSum + 1;
        }
        currentSum += coins[i];
    }

    return currentSum + 1;
}

TEST_CASE( "isValidSubsequence Length", "[Not in Order]" ) {
    REQUIRE( nonConstructibleChange({1, 3}) == 2 );
    REQUIRE( nonConstructibleChange({1,2,3}) == 7);
}