#include <catch2/catch_test_macros.hpp>

#include "mergesort.h"
#include "insertionsort.h"
#include "bubblesort.h"
#include "heap.h"

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
//
//TEST_CASE("max-heapify 1", "[8, 1, 5]") {
//    std::vector<int> heapified({8, 1, 5});
//    std::vector<int> unsortedVec({5, 1, 8});
//    Heap heap(unsortedVec);
//    heap.maxHeapify(0);
//    REQUIRE(heapified == unsortedVec);
//}
//
//TEST_CASE("Max-Heapify(A, 2)", "[16, 4, 10, 14, 7, 9, 3, 2, 8, 1]") {
//    std::vector<int> heapified({16, 14, 10, 8, 7, 9, 3, 2, 4, 1});
//    std::vector<int> unsortedVec({16, 4, 10, 14, 7, 9, 3, 2, 8, 1});
//    Heap heap(unsortedVec);
//    heap.maxHeapify(1);
//    REQUIRE(heapified == unsortedVec);
//}
//
//TEST_CASE("max-heapify-sort 3", "[7, 8, 3, 11, 43, 55]") {
//    std::vector<int> heapified({3, 7, 8, 11, 43, 55});
//    std::vector<int> unsortedVec({7, 8, 3, 11, 43, 55});
//    Heap heap(unsortedVec);
//    heap.sort();
//    REQUIRE(heapified == unsortedVec);
//}
//
//TEST_CASE("max-heapify-sort k 3", "[7, 8, 3, 11, 43, 55]") {
//    std::vector<int> heapified({3, 7, 8, 11, 43, 55});
//    std::vector<int> unsortedVec({7, 8, 3, 11, 43, 55});
//    Heap heap(unsortedVec);
//    heap.sort(2);
//    REQUIRE(heapified == unsortedVec);
//}

TEST_CASE("max-heapify-sort k 3", "[55, 7, 8]") {
    std::vector<int> heapified({7, 8, 55});
    std::vector<int> unsortedVec({55, 7, 8});
    Heap heap(unsortedVec);
    heap.sort(2);
    REQUIRE(heapified == unsortedVec);
}