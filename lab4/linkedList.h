//
// Created by Jungsik Jackson Byun on 10/11/17.
//

#ifndef LAB4_LINKEDLIST_H
#define LAB4_LINKEDLIST_H
#include <iostream>
#include <stack>
using namespace std;


class linkedList
{
private:
    class node
    {
    public:
        string data;
        node * next;
    };

    node * head = new node;

    //private helper methods

    //return pointer to smallest
    //data value node in list
    //from p to end of list.
    node * findSmallest(node * p)
    {
        node * small = p;
        for(node * i = p; i!=NULL; i=i->next)
        {
            if( i->data < small->data )
                small = i;
        }
        return small;
    }

public:

    linkedList()
    {
        head = NULL;
    }

    //add a new item x to front of list
    // O(1) run time!
    void addFront(string x)
    {
        node * babyNode;
        babyNode = new node;

        babyNode->next = head;
        babyNode->data = x;

        head = babyNode;

    }

    //remove and return front item from
    //list.
    // run time: O(n)
    string removeFront()
    {
        node * doomedNode = head;
        string output = doomedNode->data;
        head = head->next;

        //take care of memory leak
        delete doomedNode;
        return output;
    }

    void display()
    {
        node * walker = head;

        while( walker != NULL )
        {
            cout << walker->data << endl;
            walker = walker->next;
        }
    }

    void remove(string x) {
        node * current = head;
        node * previous = new node;

        while (current->next != NULL) {//while start
            if(current->data == x){     //if data and x value match
                break;                  //out of while
            }else {
                previous = current;
                current = current->next;
            }
        }//while end
        if(previous->next == NULL){     //If need to delete first node
            head= head ->next;      //head -> current->next

        }else {
            previous->next = current->next;

        }
    }

    void addBack(string x) {

        node *temp = new node;
        temp->data = x;
        temp->next = NULL;

        if (head == NULL) {
            head = temp;
        } else {
            node *newNode = head;
            while (newNode->next != NULL) {
                newNode = newNode->next;
            }
            newNode->next = temp;
        }

    }

    void displayBackwards(){
        node * walker = head;
        stack<struct node*> nodeStack;
        while( walker != NULL )
        {
            nodeStack.push(walker);
            walker = walker->next;
        }
        walker = nodeStack.top();
        head = walker;
        nodeStack.pop();
        while(!nodeStack.empty()){
            walker->next = nodeStack.top();
            nodeStack.pop();
            walker=walker->next;
        }
        walker->next = NULL;
    }

    void sort(){
        node * first = head;
        node * second = head;
        while (first ->next != NULL){
            while (second->next != NULL){
                if(first->data > second->data){
                    swap(first->data, second->data);
                }
                second = second->next;
            }
            first = first ->next;
        }
    }

    void tricemate(){
        node * current = head;
        node * previous = new node;
        int counter=1;

        while (current->next != NULL){
            if(counter%3 == 0){
                previous->next = current -> next;
                counter++;
            } else {
                previous = current;
                counter++;
                current = current->next;
            }
        }
    }


};
#endif //LAB4_LINKEDLIST_H
