#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> myvecA;
    vector<int> myvecB(10);
    vector<int> myvecC(5,-9);
    vector<string> myvecD(6,"Are we there yet?");

    //The size method should return how many items, abstractly,
    //the vector currently holds.
    cout << "vector A size: " << myvecA.size() << endl;
    cout << "vector B size: " << myvecB.size() << endl;
    cout << "vector C size: " << myvecC.size() << endl;
    cout << "vector D size: " << myvecD.size() << endl;

    //Capacity should report how large the array holding the items is.
    //This size will be at least that of 'size()', but could be larger.
    cout << "vector A capacity: " << myvecA.capacity() << endl;
    cout << "vector B capacity: " << myvecB.capacity() << endl;
    cout << "vector C capacity: " << myvecC.capacity() << endl;
    cout << "vector D capacity: " << myvecD.capacity() << endl;

    //You can access the items in the array
    //with the '[]' operator.
    cout << endl;
    cout << "vector B: " << endl;
    myvecB[3] = 43;
    myvecB[7] = 17;
    for(int i=0; i<myvecB.size(); i++)
        cout << myvecB[i] << endl;

    cout << endl;
    cout << "vector C: " << endl;
    myvecC[2] = 50;
    for(int i=0; i<myvecC.size(); i++)
        cout << myvecC[i] << endl;

    cout << endl;
    cout << "vector D: " << endl;
    myvecD[5] = "Shut up kids.";
    for(int i=0; i<myvecD.size(); i++)
        cout << myvecD[i] << endl;


    //An important ability of vectors is the ability to push items to the back
    //of the vector, which may require increasing the capacity behind the scenes.
    for(int i=0; i<16; i++)
        myvecA.push_back(2380 + i);
    cout << endl;
    cout << "vector A's size and capacity:" << endl;
    cout << "vector A size: " << myvecA.size() << endl;
    cout << "vector A capacity: " << myvecA.capacity() << endl;


    //vector's also have full stack functionality.  Consider the "pop_back" method:
    for(int i=0; i<10; i++)
    {
        cout << "About to pop: " << myvecA.back() << endl;
        myvecA.pop_back();
    }

    cout << endl;
    cout << "vector A's size and capacity:" << endl;
    cout << "vector A size: " << myvecA.size() << endl;
    cout << "vector A capacity: " << myvecA.capacity() << endl;

    //Here is some addtional demo of the [] operator and how it works,
    //as well as the "push_back" method.
    cout << endl;
    for(int i=0; i<5; i++)
        myvecB[i] = i*10;

    myvecB.push_back(9990);
    myvecB.push_back(9991);
    myvecB.push_back(9992);
    myvecB.push_back(9993);
    myvecB.push_back(9994);

    for(int i=0; i<myvecB.size(); i++)
        cout << myvecB[i] << endl;


    //Now we will see, for a large example, how the vector adjusts its capacity:
    cout << endl;
    int max = 100;
    for(int i=0; i<max; i++)
    {
        int x = i*10000;
        myvecB.push_back(x);
        cout << "Pushing: " << x << ", size: " << myvecB.size() << ", capacity: " << myvecB.capacity() << endl;
    }
    return 0;
}