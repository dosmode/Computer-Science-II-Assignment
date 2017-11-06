

#include <iostream>
#include <string>
#include "linkedList.h"
#include <algorithm>
using namespace std;


int main()
{
    //part 0:
    linkedList list1;

    list1.addFront("pichacu");
    list1.addFront("elmo");
    list1.addFront("charmander");
    list1.addFront("ekans");

    list1.removeFront();
    list1.removeFront();

    list1.addFront("snorlax");

    list1.display(); //snorlax elmo pichacu


    //part 1:  implement "addBack"
    linkedList list2;
    list2.addBack("rattata");
    list2.addBack("raticate");
    list2.addBack("arcanine");
    list2.addFront("arbok");
    list2.addFront("eevee");

    list2.display(); //eevee arbok rattata raticate arcanine


    //part 2: implement "remove"
    list2.remove("arcanine");
    list2.remove("rattata");
    list2.remove("eevee");

    list2.addFront("dugtrio");
    list2.addBack("charizard");

    list2.display(); //dugtrio arbok raticate charizard

    //part 3:  Write a method that prints the list in reverse order.
    //Suggestion:  add "#include <stack>" at the top to use the STL stack class.
    //Declare a stack of the appropriate type (stack is a templated class) and use
    //it to solve this problem.
    list2.displayBackwards(); //charizard raticate arbok dugtrio

    //part 4: implement "sort"
    list1.sort();
    list2.sort();

    list1.display(); //elmo pichacu snorlax
    list2.display(); //arbok charizard dugtrio raticate


    //part 5:  implement "tricemate"
    linkedList list3;
    list3.addBack("A");
    list3.addBack("B");
    list3.addBack("C");
    list3.addBack("D");
    list3.addBack("E");
    list3.addBack("F");
    list3.addBack("G");
    list3.addBack("H");
    list3.addBack("I");
    list3.addBack("J");

    list3.tricemate();
    list3.display(); //A B D E G H J

    return 0;
}