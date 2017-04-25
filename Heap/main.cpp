#include "heap.h"

int main(){

    int a[10], size;
    cout << "Enter size of list: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";

    for(int i=0; i < size; i++){
        cin >> a[i];
    }

    Heap H;

    H.heapsort(a, size);

    return 0;
}
