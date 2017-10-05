#include <iostream>
#include <string>
using namespace std;

class node{
public:

    string data;
    node * next;
};

void printList (node * p) {
    node *temp = new node;
    temp = p;

    while (temp != NULL) {
        cout << (*p).data << endl;
        p= (*p).next;
    }
}


int main() {
    node * A;
    A = new node;

    node * B;
    B = new node;

    node * C;
    C = new node;

    (*A).data="pineapple";
    (*B).data = "fajita";
    (*C).data ="potcake";
    (*A).next = B;
    (*B).next = C;

    node * D;
    D= new node;
    (*C).next = D;

    (*D).data = "newtaco";

    (*D).next = NULL;

    printList(A);

    return 0;
}