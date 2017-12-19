//
// Created by Jungsik Jackson Byun on 10/22/17.
//
#include <iostream>
using namespace std;
#ifndef IMPLEMENTING_ABSTRACT_DATA_TYPES_WITH_LINKED_LISTS_PRIORITYQUEUELL_H
#define IMPLEMENTING_ABSTRACT_DATA_TYPES_WITH_LINKED_LISTS_PRIORITYQUEUELL_H


class priorityQueue
{
private:
    class node
    {
    public:

        double data;
        node * next;
        node * prev;

        node(double x){
            data = x;
            next = NULL;
            prev = NULL;

        }
    };

    node * head;
    node * tail;
public:

    priorityQueue() {
        head = NULL;
        tail = NULL;
    }

    ~priorityQueueLL()
    {
        while(!empty()){
            extractMin();
        }
    }
    bool empty(){
        if (head == NULL){
            return true;
        }else return false;
    }

    int insert(int x)
    {
        if(head == NULL) {
            node *temp = new node(x);
            head = temp;
            tail = temp;
        }else {
            node * temp = new node(x);
            temp->prev = tail;
            tail->next =temp;
            tail = temp;
        }
    }
    double extractMin() {
        node * temp = head;
        for(node * p = head; p!=NULL; p->next){
            if(p->data < temp->data){
                swap(p->data, temp->data);
            }
        }
        node * doomed = head;
        double tempdata = doomed->data;
        head=head->next;
        delete doomed;
        return tempdata;
    }
};
class test {
    double closest = 100.0;
    int n;
    for(int p1 = 0; p1 < n; p1++){
        for (int p2 = p1 + 1; p2 < n; p2++) {
            int data = abs(points[p1] - points[p2]);
            if (closest > data) {
                closest = data;
            }
        }
    }
};

int fullNodes (node * p)
{
    if (p == NULL){
        return 0;
    }else if (p->left != NULL && p->right != NULL) {
        return 1 + fullNodes(p->left) + fullNodes(p->right);
    }
}


void reverse(node *r){
    if(r == NULL) {
    } else {
        swap(r->left, r->right);
        reverse(r->right);
        reverse(r->left);
    }
}

#endif //IMPLEMENTING_ABSTRACT_DATA_TYPES_WITH_LINKED_LISTS_PRIORITYQUEUELL_H
