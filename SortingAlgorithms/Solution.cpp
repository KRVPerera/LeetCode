#include <catch2/catch_test_macros.hpp>

#include "mergesort.h"
#include "insertionsort.h"
#include "bubblesort.h"

using namespace std;

TEST_CASE("insertionSort", "[Sort Array]") {
    std::vector<int> sortedVec({-1, 1, 5, 6, 8, 10, 22, 25});
    std::vector<int> unsortedVec({5, 1, 22, 25, 6, -1, 8, 10});
    insertionSort(unsortedVec);
    REQUIRE(sortedVec == unsortedVec);
}

TEST_CASE("insertionSort", "[Sort small Array]") {
    std::vector<int> sortedVec({-1, 5});
    std::vector<int> unsortedVec({5, -1});
    insertionSort(unsortedVec);
    REQUIRE(sortedVec == unsortedVec);
}

TEST_CASE("insertionSort", "[Sort one element Array]") {
    std::vector<int> sortedVec({-1});
    std::vector<int> unsortedVec({-1});
    insertionSort(unsortedVec);
    REQUIRE(sortedVec == unsortedVec);
}

TEST_CASE("mergeSort", "[Sort Array]") {
    std::vector<int> sortedVec({-1, 1, 5, 6, 8, 10, 22, 25});
    std::vector<int> unsortedVec({5, 1, 22, 25, 6, -1, 8, 10});
    mergeSort(unsortedVec);
    REQUIRE(sortedVec == unsortedVec);
}

TEST_CASE("mergeSort", "[Sort small Array]") {
    std::vector<int> sortedVec({-1, 5});
    std::vector<int> unsortedVec({5, -1});
    mergeSort(unsortedVec);
    REQUIRE(sortedVec == unsortedVec);
}

TEST_CASE("mergeSort", "[Sort one element Array]") {
    std::vector<int> sortedVec({-1});
    std::vector<int> unsortedVec({-1});
    mergeSort(unsortedVec);
    REQUIRE(sortedVec == unsortedVec);
}

TEST_CASE("bubbleSort", "[Sort Array]") {
    std::vector<int> sortedVec({-1, 1, 5, 6, 8, 10, 22, 25});
    std::vector<int> unsortedVec({5, 1, 22, 25, 6, -1, 8, 10});
    bubbleSort(unsortedVec);
    REQUIRE(sortedVec == unsortedVec);
}