//
// Created by Jungsik Jackson Byun on 9/19/17.
//

#ifndef LAB2_STACK_H
#define LAB2_STACK_H

template<class STACKTEMPLATE>
class stack {
private:
    STACKTEMPLATE *items;
    int numItems;
    int capacity;

    void resize(int newCapacity) {
        STACKTEMPLATE *otherArray = new STACKTEMPLATE[newCapacity];

        for (int i = 0; i < numItems; i++) {
            otherArray[i] = items[i];                     //copy
        }

        delete[] items; //delete old items array

        items = otherArray;

        capacity = newCapacity;
    }

public:
    stack() {
        numItems = 0;
        capacity = 10;
        items = new STACKTEMPLATE[capacity];

    }

    void push(STACKTEMPLATE input) {
        if (numItems == capacity) {
            resize(capacity * 2);
        }

        items[numItems] = input;
        numItems++;

    }

    STACKTEMPLATE pop() {
             if(numItems<=capacity*0.25){
                 resize(capacity*0.5);
             }
             numItems--;
        return items[numItems];
    }

    bool empty() {
        if (numItems == 0) {
            return true;
        } else false;
    }

};

#endif //LAB2_STACK_H
