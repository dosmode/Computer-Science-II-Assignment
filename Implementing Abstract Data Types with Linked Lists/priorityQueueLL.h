//
// Created by Jungsik Jackson Byun on 10/22/17.
//
#include <iostream>
using namespace std;
#ifndef IMPLEMENTING_ABSTRACT_DATA_TYPES_WITH_LINKED_LISTS_PRIORITYQUEUELL_H
#define IMPLEMENTING_ABSTRACT_DATA_TYPES_WITH_LINKED_LISTS_PRIORITYQUEUELL_H


class priorityQueueLL
{
private:
    class node
    {
    public:
        node * next;
        double data;
    };

    node * front;
    node * rear;

public:

    priorityQueueLL() {
        front = NULL;
        rear = NULL;
    }

    ~priorityQueueLL()
    {}

    //return true if empty, false if not
    bool empty(){
        if (front == NULL){
            return true;
        }else return false;
    }


    //add item
    void insert(int x) {
        node * walker = new node;
        walker ->data =x;
        walker ->next =NULL;
        if(front == NULL){
            front = walker;
            rear = walker;
        }else {
            rear->next = walker;
            rear = walker;
        }
    }
    //remove and return smallest item
    int extractMin() {
        node * current = front;

        while (current != NULL){
            if( current->data < front->data){
               swap (current->data , front->data);
            }

            current = current->next;
        }

        return front->data;
    }


};
#endif //IMPLEMENTING_ABSTRACT_DATA_TYPES_WITH_LINKED_LISTS_PRIORITYQUEUELL_H
