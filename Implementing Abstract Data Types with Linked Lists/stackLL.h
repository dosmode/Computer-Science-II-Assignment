//
// Created by Jungsik Jackson Byun on 10/22/17.
//
#include <iostream>
using namespace std;
#ifndef IMPLEMENTING_ABSTRACT_DATA_TYPES_WITH_LINKED_LISTS_STACKLL_H
#define IMPLEMENTING_ABSTRACT_DATA_TYPES_WITH_LINKED_LISTS_STACKLL_H

class stackLL
{
private:
    class node
    {
    public:
        node * next;
        double data;

    };

    node * top;

public:

    stackLL() {
       top = NULL;
    }

    ~stackLL() {
        delete top;
    }

    //return true if empty, false if not
    bool empty() {
        if (top == NULL) {
            return true;
        } else false;
    }

    //add item to top of stack
    void push(int x) {
        node *walker = new node;
        walker->data = x;
        if (empty() == true) {
            walker->next = NULL;
        } else walker->next = top;

        top = walker;
    }

    //remove and return top item from stack
    int pop() {
        if (empty() == true) {
            return NULL;        //nothing can be popped
        } else {
            node *walker = top;
            top = walker->next;
            delete walker;
            return walker->data;
        }
    }

    //////////////////////////////
    //additional "weird" methods:
    //////////////////////////////

    int remove(node * temp, int k){
        node * previous = new node;
        while(temp != NULL){
            previous = temp;
            if(temp->data == k){
                previous = temp ->next;
                return temp->data;
            }
            temp = temp ->next;
        }
        top = previous;
        delete temp;
    }

    //remove and return the kth item from the top of the stack.
    int popkth(int k) {
        node * walker = top;
        remove(walker, k);
    }

    //decimate: remove every 10th item from the stack
    void decimate() {
        node * walker = top;
        int counter = 1;
        while ( walker != NULL){
            counter ++;
            if(counter%10 == 0){
                int temp = walker->data;
                remove(walker, temp);
            }
            walker = walker->next;
        }
    }

    //add item x to stack, but insert it
    //right after the current ith item from the top
    //(and before the i+1 item).
    void insertAt(int x, int i) {
        node * walker = top;
        node * newNode = new node;
        newNode->data =x;
        int counter = 0;
        while ( walker != NULL){
            counter ++;
            if(counter == i){
               walker->next = newNode;
                walker = walker->next;
                newNode->next =walker;
                break;
            }
        }
    }

};

#endif //IMPLEMENTING_ABSTRACT_DATA_TYPES_WITH_LINKED_LISTS_STACKLL_H
