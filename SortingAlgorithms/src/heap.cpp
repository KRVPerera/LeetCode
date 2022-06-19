//
// Created by Rukshan Perera on 2022-06-12.
//

#include "heap.h"

Heap::Heap(vector<int> &vec) : array(vec), heapSize(vec.size()) {
}

void Heap::maxHeapify(int i) {
    int l = left(i);
    int r = right(i);

    int largest;
    if (l <= heapSize && array[l] > array[i]) {
        largest = l;
    } else {
        largest = i;
    }

    if (r <= heapSize && array[r] > array[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(array[i], array[largest]);
        maxHeapify(largest);
    }
}

void Heap::buildMaxHeap(int n) {
    heapSize = n;
    for (int i = parent(n) ; i >= 0; i--) {
        maxHeapify(i);
    }
}

void Heap::sort() {
    buildMaxHeap(array.size() - 1);
    for (int i = array.size() - 1; i > 0; i--) {
        swap(array[0], array[i]);
        heapSize--;
        maxHeapify(0);
    }
}