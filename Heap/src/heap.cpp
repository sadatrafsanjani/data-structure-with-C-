#include "heap.h"

void Heap::heapsort(int *p, int length){

    buildheap(p, length);
    int heapsize;
    heapsize = length - 1;

    for(int i=heapsize; i >= 0; i--){
        int temp = p[0];
        p[0] = p[heapsize];
        p[heapsize] = temp;
        heapsize--;
        satisfyheap(p, 0, heapsize);
    }

    for(int i=0; i < length; i++){
        cout << "\t" << p[i];
    }
}

void Heap::buildheap(int *p, int length){

    int heapsize;
    heapsize = length - 1;

    for(int i=(length/2); i >= 0; i--){
        satisfyheap(p, i, heapsize);
    }
}

void Heap::satisfyheap(int *p, int i, int heapsize){

    int l, r, largest, temp;
    l = 2*i;
    r = 2*i + 1;

    if(l <= heapsize && p[l] > p[i]){
        largest = l;
    }
    else {
        largest = i;
    }

    if( r <= heapsize && p[r] > p[largest]){
        largest = r;
    }

    if(largest != i){
        temp = p[i];
        p[i] = p[largest];
        p[largest] = temp;
        satisfyheap(p, largest, heapsize);
    }
}
