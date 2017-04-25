#include <iostream>
#include <insertionsort.h>

using namespace std;

int main(){

    int a[] = {12, 11, 13, 5, 6};
    int n = sizeof(a)/sizeof(a[0]);

    InsertionSort S;
    int *sortedArray = S.insertionSort(a, n);

    for(int i=0; i<n; i++){
        cout << sortedArray[i] << " ";
    }

    return 0;
}
