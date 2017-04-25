#ifndef TREE_H
#define TREE_H
#include "node.h"
#include <iostream>

using namespace std;

class Tree{

    private:
        Node *root;
        void insertion(int,Node *);
        Node *searching(int,Node *);
        void preOrder(Node *);
        void inOrder(Node *);
        void postOrder(Node *);

    public:
        Tree();
        void insertion(int);
        Node *searching(int);
        void preOrder();
        void inOrder();
        void postOrder();
};

#endif // TREE_H
