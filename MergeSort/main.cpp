#include <iostream>
#include <mergesort>
using namespace std;

int main(){

    int a[] = {6,3,7,8,2,4,5,1};

    cout<<"Before:";

    for (int i = 0; i<5; i++){
        cout << a[i] << " ";
    }

    MergeSort M;

    M.mergesort(a, 0, 4);
    cout<<"\n\nAfter: ";

    for (int i=0; i<5; i++){
        cout << a[i] << " ";
    }



}
