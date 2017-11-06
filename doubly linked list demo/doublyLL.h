//
// Created by Jungsik Jackson Byun on 10/16/17.
//

#ifndef DOUBLY_LINKED_LIST_DEMO_DOUBLYLL_H
#define DOUBLY_LINKED_LIST_DEMO_DOUBLYLL_H

#include <iostream>
using namespace std;


class doublyLL
{
private:
    class node
    {
    public:
        double data;
        node * next;
        node * prev;

        node(double x)
        {
            data = x;
            next = NULL;
            prev = NULL;
        }
    };

    node * head;
    node * tail;

    //return pointer to node with value x.
    //return NULL if x is not in list.
    node * findNode(double x)
    {
        for(node * p=head;  p!=NULL; p=p->next)
        {
            if( p->data == x )
                return p;
        }
        return NULL;
    }

    void removeNode(node * doomed)
    {
        if( doomed == NULL )
        {
        }
        else if(doomed == head)
        {
               removeFront();
        }
        else if(doomed == tail)
        {
                removeBack();
        }
        else
        {
            doomed->prev->next = doomed->next;
            doomed->next->prev = doomed->prev;
            delete doomed;
        }
    }

public:
    doublyLL()
    {
        head = NULL;
        tail = NULL;
    }

    void addBack(double x)
    {
        node * baby = new node(x);
        if( head == NULL )
        {
            head =  baby;
            tail = baby;
        }
        else
        {
            tail->next = baby;
            baby->prev = tail;
            tail = baby;
        }
    }

    //Let's use... a for loop this time
    void displayForwards()
    {
        for(node * p=head; p!=NULL; p=p->next)
        {
            cout << p->data << endl;
        }
        cout << endl;
    }

    //We used a for-loop last time, so let's use a while-loop this time for variety
    void displayBackwards()
    {
        node * p = tail;
        while( p!= NULL)
        {
            cout << p->data << endl;
            p= p->prev;
        }
        cout << endl;
    }


    //remove value x from list
    void remove(double x)
    {
        node * doomedNode = findNode(x);
        removeNode(doomedNode);
    }

    void removeFront(){
        head = head ->next;
    }

    void removeBack(){
        tail = tail ->prev;
    }


};

#endif //DOUBLY_LINKED_LIST_DEMO_DOUBLYLL_H
