#ifndef DIJKSTRA_H
#define DIJKSTRA_H
#include <iostream>
#include <climits>

using namespace std;

#define V 9

class Dijkstra{

private:
    int minDistance(int dist[], bool sptSet[]);
    int printSolution(int dist[], int n);

public:
    Dijkstra(int graph[V][V], int);
};

#endif // DIJKSTRA_H
