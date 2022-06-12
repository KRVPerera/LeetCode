//
// Created by Rukshan Perera on 2022-06-12.
//

#include "mergesort.h"

/**
 * we assume arrays `array[p..q]` and `array[q + 1..r]`  (p <= q < r)
 * @param array
 * @param p
 * @param q
 * @param r
 */
void merge(std::vector<int> &array, int p, int q, int r) {
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

void mergeSortHelper(std::vector<int> &array, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        mergeSortHelper(array, p, q);
        mergeSortHelper(array, q + 1, r);
        merge(array, p, q, r);
    }
}

void mergeSort(std::vector<int> &array) {
    mergeSortHelper(array, 0, array.size() - 1);
}