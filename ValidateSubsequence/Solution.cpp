#include <catch2/catch_test_macros.hpp>

#include<unordered_map>
#include<unordered_set>
#include<string>

using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
    unordered_map<int, unordered_set<int>> arrayNumIndexes;
    auto arSize = array.size();
    for (int i = 0; i < arSize; ++i) {
        arrayNumIndexes[array[i]].insert(i);
    }

    int index = 0;
    for (auto num : sequence) {
        auto found = arrayNumIndexes.find(num);
        if (found == arrayNumIndexes.end()) {
            return false;
        }
        unordered_set<int>& foundSet = found->second;
        if (index > found->second) {
            return false;
        }

        index = found->second;
    }
    return true;
}

TEST_CASE( "isValidSubsequence Length", "[Not in Order]" ) {
    REQUIRE( isValidSubsequence({5, 1, 22, 25, 6, -1, 8, 10}, {1, 6, -1, -1}) == false );
}