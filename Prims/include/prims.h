#ifndef PRIMS_H
#define PRIMS_H
#include <iostream>
#include <climits>

using namespace std;

#define V 5

class Prims{

    public:
        Prims(int graph[V][V]);
    private:
        int minKey(int key[], bool mstSet[]);
        int printMST(int parent[], int, int graph[V][V]);
};

#endif // PRIMS_H
