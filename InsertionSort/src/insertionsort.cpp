#include "insertionsort.h"

int *InsertionSort::insertionSort(int *p, int n){

    for(int i=1; i<n; i++){

       int key = p[i];
       int j = i-1;

       while (j >= 0 && p[j] > key){
           p[j+1] = p[j];
           j = j-1;
       }
       p[j+1] = key;
   }

   return p;
}

