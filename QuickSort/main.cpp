#include <iostream>
#include <quicksort.h>

using namespace std;

int main(){

    QuickSort Q;
    int a[] =  {7,6,4,5,3,2,1};

    Q.quickSort(a, 0, 7);

    for(int i=0; i<7; i++){
        cout << a[i] << " ";
    }

    cout << endl << endl;

    return 0;
}
