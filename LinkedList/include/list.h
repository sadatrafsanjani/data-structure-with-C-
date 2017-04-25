#ifndef LIST_H
#define LIST_H
#include "node.h"
#include <cstddef>
#include <iostream>
using namespace std;

class List{

    private:
        Node* head;

    public:
        List() { head = NULL; }
        ~List();

        bool IsEmpty() { return head == NULL; }
        Node* InsertNode(int, double);
        int FindNode(double);
        int DeleteNode(double);
        void DisplayList();
};

#endif // LIST_H
