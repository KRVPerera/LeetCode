//
// Created by Rukshan Perera on 2022-06-18.
//

#include <vector>

#ifndef INC_75MUSTDOLEETCODE_HEAP_H
#define INC_75MUSTDOLEETCODE_HEAP_H

using namespace std;

#define parent(i) (i-1) / 2
#define left(i) 2 * i + 1
#define right(i) 2 * (i + 1)

class Heap {
private:
    vector<int> &array;
    int heapSize;

public:

    void maxHeapify(int i);
    Heap(vector<int> &vec);
    void buildMaxHeap(int);
    void sort();
};

#endif //INC_75MUSTDOLEETCODE_HEAP_H
