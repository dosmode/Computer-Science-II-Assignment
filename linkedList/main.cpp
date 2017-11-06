#include <iostream>
using namespace std;

class linkedList {
private:
    class node {

    public:
        node *next;
        double data;
    };

    node *head;

    node *findSmallest(node *p) {
        node *small = p;
        for (node *i = p; i != NULL; i = i->next) {
            if (i->data < small->data) {
                small = i;
            }
        }
        return small;
    }

public:

    void printList() {
        node *walker = head;
        while (walker != NULL) {
            cout << walker->data << endl;
            walker = walker->next;
        }
    }

    void selectionSort() {
        for (node *i = head; i != NULL; i = i->next) {
            node *small = findSmallest(i);
            swap(i->data, small->data);
        }
    }

    linkedList() {
        head = NULL;

    }

    void addFront(double x) {
        node *temp;
        temp = new node;
        temp->next = head;
        temp->data = x;
        head = temp;
    }

    void addEnd(double x) {
        node *current;
        current = head;
        node *previous = new node;
        node *newNode = new node;

        while (current->next != NULL) {
            previous = current;
            current = current->next;
        }

        newNode->data = x;
        previous->next = newNode;
        newNode->next = current;

    }

       double removeFront(){
        node * temp = head;
        double output = temp->data;
        head = head->next;

        delete temp;
        return output;
    }

};


int main() {
    linkedList myList;

    myList.addFront(3.4);
    myList.addFront(3.7);
    myList.addFront(5);
    myList.addFront(5.3);
    myList.addFront(1);
    myList.addEnd(3);
    myList.addFront(1);
    myList.addEnd(6);myList.addEnd(46);
    myList.addEnd(7);
    myList.addEnd(7); myList.addEnd(7); myList.addEnd(7); myList.addEnd(7);myList.addFront(1);






    myList.printList();
    return 0;
}