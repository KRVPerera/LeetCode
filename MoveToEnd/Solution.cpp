#include <catch2/catch_test_macros.hpp>

#include<unordered_map>
#include<unordered_set>
#include<string>

using namespace std;

vector<int> moveElementToEnd(vector<int> array, int toMove) {
    int endIndex = array.size() - 1;

    while (endIndex >= 0 && array[endIndex] == toMove) {
        endIndex--;
    }

    for (int i = 0; i <= endIndex; i++) {
        if (array[i] == toMove) {
            swap(array[i], array[endIndex]);
            endIndex--;
        }

        while (endIndex >= 0 && array[endIndex] == toMove) {
            endIndex--;
        }
    }

    return array;
}

TEST_CASE( "moveToEnd", "[Not in Order]" ) {
    vector<int> original = {12, 5, 5, 3, 4, 6, 10, 5, 5};
    auto ans = moveElementToEnd(original, 5);
    for (int i = 0; i < 4; i++) {
        REQUIRE( ans[i+5] == 5);
    }

}