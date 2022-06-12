#include <catch2/catch_test_macros.hpp>

#include<vector>

using namespace std;

void insertionSort(vector<int> &array) {
    for (int j = 1; j < array.size(); ++j) {
        int key = array[j];
        // insert key into array[1 - j-1]
        int i = j - 1;
        while (i >= 0 && array[i] > key) {
            array[i + 1] = array[i];
            i--;
        }
        array[i + 1] = key;
    }
}

/**
 * we assume arrays `array[p..q]` and `array[q + 1..r]`  (p <= q < r)
 * @param array
 * @param p
 * @param q
 * @param r
 */
void merge(vector<int> &array, int p, int q, int r) {
    int leftN = q - p + 1;
    int rightN = r - q;
    // two vectors to keep data
    std::vector<int> leftSideVector;
    leftSideVector.reserve(leftN + 1);
    std::vector<int> rightSideVector;
    rightSideVector.reserve(rightN + 1);

    for (int i = 0; i < leftN; ++i) {
        leftSideVector[i] = array[p + i];
    }

    for (int j = 0; j < rightN; ++j) {
        rightSideVector[j] = array[q + 1 + j];
    }

    leftSideVector[leftN] = INT32_MAX;
    rightSideVector[rightN] = INT32_MAX;

    // merge back to original array
    int i = 0;
    int j = 0;
    for (int k = p; k <= r; ++k) {
        if (leftSideVector[i] < rightSideVector[j]) {
            array[k] = leftSideVector[i];
            i++;
        } else {
            array[k] = rightSideVector[j];
            j++;
        }
    }
}

void mergeSortHelper(vector<int> &array, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        mergeSortHelper(array, p, q);
        mergeSortHelper(array, q + 1, r);
        merge(array, p, q, r);
    }
}

void mergeSort(vector<int> &array) {
    mergeSortHelper(array, 0, array.size() - 1);
}

TEST_CASE("insertionSort", "[Sort Array]") {
    vector<int> sortedVec({-1, 1, 5, 6, 8, 10, 22, 25});
    vector<int> unsortedVec({5, 1, 22, 25, 6, -1, 8, 10});
    insertionSort(unsortedVec);
    REQUIRE(sortedVec == unsortedVec);
}

TEST_CASE("insertionSort", "[Sort small Array]") {
    vector<int> sortedVec({-1, 5});
    vector<int> unsortedVec({5, -1});
    insertionSort(unsortedVec);
    REQUIRE(sortedVec == unsortedVec);
}

TEST_CASE("insertionSort", "[Sort one element Array]") {
    vector<int> sortedVec({-1});
    vector<int> unsortedVec({-1});
    insertionSort(unsortedVec);
    REQUIRE(sortedVec == unsortedVec);
}

TEST_CASE("mergeSort", "[Sort Array]") {
    vector<int> sortedVec({-1, 1, 5, 6, 8, 10, 22, 25});
    vector<int> unsortedVec({5, 1, 22, 25, 6, -1, 8, 10});
    mergeSort(unsortedVec);
    REQUIRE(sortedVec == unsortedVec);
}

TEST_CASE("mergeSort", "[Sort small Array]") {
    vector<int> sortedVec({-1, 5});
    vector<int> unsortedVec({5, -1});
    mergeSort(unsortedVec);
    REQUIRE(sortedVec == unsortedVec);
}

TEST_CASE("mergeSort", "[Sort one element Array]") {
    vector<int> sortedVec({-1});
    vector<int> unsortedVec({-1});
    mergeSort(unsortedVec);
    REQUIRE(sortedVec == unsortedVec);
}