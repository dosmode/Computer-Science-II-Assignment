#include <iostream>
#include "stack.h"  //add stack header
#include "queue.h"  //add queue header

using namespace std;

int main() {
    //step 1:  implement a 'resize' method so that your stack
    //does not run out of room.

    //In your constructor, start with a size at most 10 array (or smaller if you want).
    stack<string> pancakes;

    pancakes.push("mustard");
    pancakes.push("captaincrunchy");
    pancakes.push("pokemon");
    pancakes.push("beef");
    pancakes.push("pita");
    pancakes.push("smurf");
    pancakes.push("mightcore");
    pancakes.push("egg");
    pancakes.push("rotten");
    pancakes.push("tomato");

    //after pushing the 11th item, your resize should trigger
    pancakes.push("pizza");
    pancakes.push("carrot");
    pancakes.push("cheese");
    pancakes.push("cinamon");
    pancakes.push("chocochip");
    pancakes.push("blueberry");
    pancakes.push("strawberry");
    pancakes.push("original");

    cout << pancakes.pop() << endl; //original
    cout << pancakes.pop() << endl; //strawberry

    pancakes.push("banananana");
    cout << pancakes.pop() << endl; //bananananana
    cout << pancakes.pop() << endl; //blueberry

    while (!pancakes.empty()) {
        cout << "eating: " << pancakes.pop() << endl;
    }

    //step 2: template your stack class (you will need to edit your
    //step 1 test code so that it works with a templated stack class).

    stack<string> wordStack;
    wordStack.push("dog");
    wordStack.push("cat");
    wordStack.push("rat");
    cout << wordStack.pop() << endl;

    stack<int> numberStack;

    int size = 10000;
    for (int i = 0; i < size; i++)
        numberStack.push(i);

    while (!numberStack.empty())
        cout << "Popping number " << numberStack.pop() << endl;

    stack<stack<double>> stackOfStacks; //whoa, is that even possible!?!?
    stack<double> s1;
    stack<double> s2;
    stack<double> s3;
    s1.push(1);
    s1.push(2);
    s2.push(3);
    s2.push(4);
    s3.push(5);
    s3.push(6);

    stackOfStacks.push(s1);
    stackOfStacks.push(s2);
    stackOfStacks.push(s3);

    stackOfStacks.pop();
    cout << stackOfStacks.pop().pop() << endl;

    //step 3: now implement a queue
    queue<int> numberQueue;         //STL Queu Class queue<DATATYPE>
    for (int i = 0; i < 50; i++)
        numberQueue.enqueue(i);     //push
    for (int i = 0; i < 20; i++)
        cout << "Dequeing: " << numberQueue.dequeue() << endl;      //pop() and queue Queue main function:front()

    for (int i = 50; i < 60; i++)
        numberQueue.enqueue(i);                 //push

    while (!numberQueue.empty())
        cout << "Dequeing: " << numberQueue.dequeue() << endl;      //pop() and queue Queue main function:front()


    return 0;
}
