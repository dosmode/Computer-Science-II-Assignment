//
// Created by Jungsik Jackson Byun on 10/16/17.
//

#ifndef DOUBLY_LINKED_LIST_DEMO_SELFSTUFY_H
#define DOUBLY_LINKED_LIST_DEMO_SELFSTUFY_H


#include<iostream>
using namespace std;


class doublyLL{


    class node {
    public:
        node *head;
        node *next;
        double data;

        node(double x) {
            data = x;
            head = NULL;
            next = NULL;
        }
    };

    public:
        double data;
        node * prev;
        node * tail;

        doublyLL() {
            prev = NULL;
            tail = NULL;
        }

    void addback(double x) {
        node * baby = new node(x);
        if(head == NULL){

        }

    }


    };



};
#endif //DOUBLY_LINKED_LIST_DEMO_SELFSTUFY_H
