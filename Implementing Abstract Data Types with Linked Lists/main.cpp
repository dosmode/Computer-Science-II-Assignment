
#include <iostream>
#include "stackLL.h"
#include "queueLL.h"
#include "priorityQueueLL.h"
using namespace std;

int main()
{
    /////////////Test code for stack ///////////////
    stackLL stk;

    stk.push(5);
    stk.push(13);
    stk.push(7);
    stk.push(3);
    stk.push(2);
    stk.push(11);

    cout << "Popping: " << stk.pop() << endl;
    cout << "Popping: " << stk.pop() << endl;

    stk.push(17);
    stk.push(19);
    stk.push(23);

    while( ! stk.empty() )
    {
        cout << "Popping: " << stk.pop() << endl;
    }

    // output order: 11,2,23
#include <iostream>
#include "stackLL.h"
#include "queueLL.h"
#include "priorityQueueLL.h"
    using namespace std;

    int main()
    {
        /////////////Test code for stack ///////////////
        stackLL stk;

        stk.push(5);
        stk.push(13);
        stk.push(7);
        stk.push(3);
        stk.push(2);
        stk.push(11);

        cout << "Popping: " << stk.pop() << endl;
        cout << "Popping: " << stk.pop() << endl;

        stk.push(17);
        stk.push(19);
        stk.push(23);

        while( ! stk.empty() )
        {
            cout << "Popping: " << stk.pop() << endl;
        }

        // output order: 11,2,23,19,17,3,7,13,5

        ///////////////////////////////////////

        //////////Test code for queue ///////////

        queueLL Q;

        Q.enqueue(1);
        Q.enqueue(2);
        Q.enqueue(3);
        cout << "Dequeuing: " << Q.dequeue() << endl;
        cout << "Dequeuing: " << Q.dequeue() << endl;
        Q.enqueue(4);
        Q.enqueue(5);

        while( ! Q.empty() )
        {
            cout << "Dequeuing: " << Q.dequeue() << endl;
        }

        /////////////////////////////////////////



        //////////Test code for priority queue/////

        priorityQueueLL pQueue;

        const int SIZE = 2;

        //insert a bunch of random numbers
        for(int i=0; i<SIZE; i++)
        {
            pQueue.insert( rand() );
        }

        //pull them back out..

        //  while( ! pQueue.empty() ) {       //Couldn't figure out.
        cout << pQueue.extractMin() << endl;
        //  }
        ///////////////////////////////////////////


        return 0;
    },19,17,3,7,13,5

    ///////////////////////////////////////

    //////////Test code for queue ///////////

    queueLL Q;

    Q.enqueue(1);
    Q.enqueue(2);
    Q.enqueue(3);
    cout << "Dequeuing: " << Q.dequeue() << endl;
    cout << "Dequeuing: " << Q.dequeue() << endl;
    Q.enqueue(4);
    Q.enqueue(5);

    while( ! Q.empty() )
    {
        cout << "Dequeuing: " << Q.dequeue() << endl;
    }

    /////////////////////////////////////////



    //////////Test code for priority queue/////

    priorityQueueLL pQueue;

    const int SIZE = 2;

    //insert a bunch of random numbers
    for(int i=0; i<SIZE; i++)
    {
        pQueue.insert( rand() );
    }

    //pull them back out..

  //  while( ! pQueue.empty() ) {       //Couldn't figure out.
        cout << pQueue.extractMin() << endl;
  //  }
    ///////////////////////////////////////////


    return 0;
}