#include "node.h"
#include "tree.h"

int main(){

    Tree *binary = new Tree;

    binary->insertion(25);
    binary->insertion(20);
    binary->insertion(36);
    binary->insertion(10);
    binary->insertion(22);
    binary->insertion(5);

    cout << "Pre-Order: ";
    binary->preOrder();
    cout << endl;

    cout << "In-Order: ";
    binary->inOrder();
    cout << endl;

    cout << "Post-Order: ";
    binary->postOrder();
    cout << endl;

    return 0;
}
