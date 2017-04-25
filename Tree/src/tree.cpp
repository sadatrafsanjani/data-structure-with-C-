#include "tree.h"

Tree::Tree(){

    root = NULL;
}

void Tree::insertion(int data,Node *aNode){

    if(data < aNode->data){

        if(aNode->left != NULL){

            insertion(data,aNode->left);
        }
        else{

            aNode->left = new Node(data);
            aNode->left->left = NULL;
            aNode->left->right = NULL;
        }
    }
    else if(data >= aNode->data){

        if(aNode->right != NULL){

            insertion(data,aNode->right);
        }
        else{

            aNode->right = new Node(data);
            aNode->right->left = NULL;
            aNode->right->right = NULL;
        }
    }
}

void Tree::insertion(int data){

    if(root != NULL){

        insertion(data,root);
    }
    else{

        root = new Node(data);
        root->left = NULL;
        root->right = NULL;
    }
}

Node* Tree::searching(int data,Node *aNode){

    if(aNode != NULL){

        if(data == aNode->data){

            return aNode;
        }
        else if(data < aNode->data){

            return searching(data,aNode->left);
        }
        else{

            return searching(data,aNode->right);
        }
    }
    else{

        return NULL;
    }
}

Node* Tree::searching(int data){

    return searching(data,root);
}

void Tree::preOrder(){

    preOrder(root);
}

void Tree::preOrder(Node *aNode){

    if(aNode != NULL){

        cout << aNode->data << " ";
        preOrder(aNode->left);
        preOrder(aNode->right);
    }
}

void Tree::inOrder(){

    inOrder(root);
}

void Tree::inOrder(Node *aNode){

    if(aNode != NULL){

        inOrder(aNode->left);
        cout << aNode->data << " ";
        inOrder(aNode->right);
    }
}

void Tree::postOrder(){

    postOrder(root);
}

void Tree::postOrder(Node *aNode){

    if(aNode != NULL){

        postOrder(aNode->left);
        postOrder(aNode->right);
        cout << aNode->data << " ";
    }
}
