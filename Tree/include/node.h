#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <string>
using namespace std;

class Node {

    public:
        int data;
        Node *left;
        Node *right;

        Node(int);

};

#endif // NODE_H
