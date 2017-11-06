#include <iostream>
#include <string>
#include "doublyLL.h"
using namespace std;

int main()
{
    doublyLL list;

    list.addBack(10);
    list.addBack(3.14);
    list.addBack(21);
    list.addBack(41);
    list.addBack(13);
    list.addBack(2.18);
    list.addBack(101);

    list.remove(41);

    list.remove(10);
    list.remove(101);

    list.addBack(305);

    list.displayForwards();

    list.displayBackwards();

    list.(list);

    return 0;
}