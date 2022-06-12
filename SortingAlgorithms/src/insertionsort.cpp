//
// Created by Rukshan Perera on 2022-06-12.
//

#include "insertionsort.h"

void insertionSort(std::vector<int> &array) {
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