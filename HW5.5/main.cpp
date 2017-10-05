#include <iostream>
#include <string>
using namespace std;

template <class THING>
class priorityQueue{
private:
    THING * items;
    int capacity;
    int front;
    int back;


      void resize(int newCapacity) {
        THING *otherArray = new THING[newCapacity];
        int initial = 0;
        for (int i = front; i < back; i++) {
            otherArray[initial] = items[i];
            initial++;
        }

        delete[] items; //delete old items array

        items = otherArray;
        capacity = newCapacity;
        front = 0;
        back/=2;
    }
public:
    priorityQueue(){

        capacity=100;
        front = 0;
        back = 0;
        items = new THING[capacity];
    }

    void insert(THING inputNum) {
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

        items[back] = inputNum;
        back++;

    }

    THING extractMin(){
        sort();
        return items[front++];
    }

    void sort(){
        THING temp;
        int loopFront=front;
        for (loopFront; loopFront<back ; loopFront++) {
            for (int j = loopFront+1; j < back; j++) {
                if (items[loopFront] > items[j]) {
                    //swap
                    temp = items[loopFront];
                    items[loopFront] = items[j];
                    items[j] = temp;
                }
            }
        }
    }

    bool empty(){
        if (front - back == 0){
            return true;
        } else
            return false;
    }
};


template <class THING>
void priorityQueueSort(THING * items, int start, int end)
{
    priorityQueue<THING> queueClass;

    for (start = 0; start<= end ; start++){
        queueClass.insert(items[start]);
    }
    queueClass.sort();

    //declare a variable of type priority queue


    //insert the items from the 'items' array into the priority queue, one by one


    //extract the items from the priorityQueue one by one and write each value
    // into the 'items' array in the order they come out.

}

int main()
{
    ///////////////////////////////////////////////////
    //Step 1:  Implement an array based priority queue.
    ////////////////////////////////////////////////////

    //A priority queue is an abract data type that supports
    //two operations:  1) insert an item, 'insert(x)', and
    //2) remove and return the smallest item, 'extractMin()'.
    //Implement a priority queue using an array based implementation.
    //
    //Include the big-Oh run-time for each method:
    //What is the run time of your insert method? - O(n)
    //What is the run time of your extractMin method?- O(n^2)
    //What is the run time of your priorityQueueSort function? -O(n*logn)

    priorityQueue<double> pq;

    pq.insert(57);
    pq.insert(32);
    pq.insert(105);
    pq.insert(17);

    cout << pq.extractMin() << endl; //17
    cout << pq.extractMin() << endl; //32
    cout << endl;

    pq.insert(68);
    pq.insert(5);
    pq.insert(43);

    cout << pq.extractMin() << endl; //5
    cout << pq.extractMin() << endl; //43
    cout << pq.extractMin() << endl; //57
    cout << endl;

    pq.insert(120);
    pq.insert(500);
    pq.insert(3);
    pq.insert(73);
    pq.insert(29);

    //3 29 68 73 105 120 500
    while (!pq.empty())
    {
        cout << pq.extractMin() << endl;
    }
    cout << endl;

    ///////////////////////////////////////////////////////////////////
    //Step 2: now, write a sorting routine that uses a priority queue to sort
    ///////////////////////////////////////////////////////////////////

    //fill a big array with random numbers
    int size = 10;
    int * numbers = new int[size];
    for (int i = 0; i < size; i++)
    {
        numbers[i] = rand();
    }

    //sort the array using a priority queue to help you
    priorityQueueSort(numbers, 0, size - 1);

    //now array should be in sorted order
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}