//
// Created by Rukshan Perera on 2022-06-12.
//

#include "bubblesort.h"

void bubbleSort(std::vector<int> &array) {
    int arraySize = array.size();
    for (int i = 0; i < arraySize - 1; ++i) {
        for (int j = 1; j < arraySize; ++j) {
            if (array[j] < array[j - 1]) {
                std::swap(array[j], array[j - 1]);
            }
        }
    }
}