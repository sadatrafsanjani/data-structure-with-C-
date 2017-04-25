#include <iostream>
#include "include/selectionsort.h"

using namespace std;

int main(){

    int a[] = {5,4,3,2,1};
    SelectionSort S;
    int *sortArray = S.selectionSort(a, 5);

    cout << "Sorted list : ";

    for(int i=0; i<5; i++){

        cout << sortArray[i] << " ";
    }

    return 0;
}
