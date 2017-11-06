//
// Created by Jungsik Jackson Byun on 10/22/17.
//
#include <iostream>
using namespace std;
#ifndef IMPLEMENTING_ABSTRACT_DATA_TYPES_WITH_LINKED_LISTS_QUEUELL_H
#define IMPLEMENTING_ABSTRACT_DATA_TYPES_WITH_LINKED_LISTS_QUEUELL_H
class queueLL
{
private:
    class node {
    public:
        node * next;
        double data;
    };

    node * front;
    node * rear;

public:
    queueLL() {
        front = NULL;
        rear = NULL;
    }

    ~queueLL() {
    }

    //add item to back of queue
    int enqueue(int x)
    {
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

    //remove and return first item from queue
    int dequeue(){
        if(front == NULL){
            cout<<"Nothing in the queue"<<endl;
        }else {
            node * temp = front;
            front = front ->next;
            return temp->data;
        }
    }

    bool empty(){
        if(front == NULL){
            return true;
        }else{ return false;}
    }
};

#endif //IMPLEMENTING_ABSTRACT_DATA_TYPES_WITH_LINKED_LISTS_QUEUELL_H
