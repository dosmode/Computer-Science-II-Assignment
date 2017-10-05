//
// Created by Jungsik Jackson Byun on 9/19/17.
//

#ifndef LAB2_QUEUE_H
#define LAB2_QUEUE_H

template<class QUEUE>
class queue {
private:
    QUEUE *items;

    int capacity;
    int front;
    int back;

    void resize(int newCapacity) {
        QUEUE *otherArray = new QUEUE[newCapacity];
        int initial = 0;
        for (int i = front; i < back; i++) {
            otherArray[initial] = items[i];
            initial++;
        }

        delete[] items; //delete old items array

        items = otherArray;
        capacity = newCapacity;
        front = 0;
    }

public:
    queue() {
        back = 0;
        capacity = 2;
        front = 0;
        items = new QUEUE[capacity];

    }

    void enqueue(QUEUE input) {
        int temp = front;
        if (back >= capacity) {
            if (front == 0) {
                resize(capacity * 2);
            } else {
                temp = front;
                if (back >= temp) {
                    resize(capacity * 2);
                }
            }
        }
        items[back] = input;
        back++;
    }

    QUEUE dequeue() {
        if (front == capacity) {
            front = 0;
        }
        return items[front++];

    }

    bool empty() {
        if (front - back == 0) {
            return true;
        } else false;
    }

};

#endif //LAB2_QUEUE_H
