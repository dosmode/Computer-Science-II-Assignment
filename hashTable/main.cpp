#include <iostream>
using namespace std;
using namespace std;

#include <iostream>
using namespace std;


class linkedList
{
private:
    class node
    {
    public:
        double data;
        node * next;
        node * prev;

        node(double x)
        {
            data = x;
            next = NULL;
            prev = NULL;
        }
    };
public:
    node * head;
    node * tail;
    node * prev;

    //return pointer to node with value x.
    //return NULL if x is not in list.
    node * findNode(double x)
    {
        for(node * p=head;  p!=NULL; p=p->next)
        {
            if( p->data == x )
                return p;
        }
        return NULL;
    }
public:
    void removeNode(node * doomed)
    {
        if( doomed == NULL )
        {
        }
        else if(doomed == head)
        {
            removeFront();
        }
        else if(doomed == tail)
        {
            removeBack();
        }
        else
        {
            doomed->prev->next = doomed->next;
            doomed->next->prev = doomed->prev;
            delete doomed;
        }
    }


    linkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void addBack(double x)
    {
        node * baby = new node(x);
        if( head == NULL )
        {
            head =  baby;
            tail = baby;
        }
        else
        {
            tail->next = baby;
            baby->prev = tail;
            tail = baby;
            baby->next = NULL;
        }
    }

    int next(){
        node * current = head;

        current = current->next;
        return current->data;
    }

    //Let's use... a for loop this time
    void displayForwards()
    {
        for(node * p=head; p!=NULL; p=p->next)
        {
            cout << p->data << endl;
        }
        cout << endl;
    }

    //We used a for-loop last time, so let's use a while-loop this time for variety
    void displayBackwards()
    {
        node * p = tail;
        while( p!= NULL)
        {
            cout << p->data << endl;
            p= p->prev;
        }
        cout << endl;
    }


    //remove value x from list
    void remove(double x)
    {
        node * doomedNode = findNode(x);
        removeNode(doomedNode);
    }

    void removeFront(){
        head = head ->next;
    }

    void removeBack(){
        tail = tail ->prev;
    }
};
class hashTable
{

public:
    int tableSize;
    linkedList * table;

    hashTable(int x){
        tableSize= x;
        linkedList * table = new linkedList[tableSize];
    }
    int index;
    void insert(int x){
        table[x % tableSize].addBack(x);

    }

 /*   void remove(int x){

        table[x % tableSize];

        if ( contains(x % tableSize == true)){
            while (table[ x % tableSize].tail != NULL){
                if(table->next() == x){

                }
            }
        }
    }
*/
    bool contains(int x){
        index = x % tableSize;

        while ( table != NULL ){
            if(table[index].next() == x){
                return true;
            }
        } return false;

    }

};

int main()
{

	//Part 1:  Implement a doubly linked list of integers with the following methods:
	//void insert(int x), void remove(int x), and bool contains(int x)
	//Answer the following:  what is the big-oh ( O(?) ) run time of each of these methods?



	//Part 2:  Searching linked lists is TOO SLOW!  This needs to be fixed...
	//You might have noticed that "remove" and "contains" are a bit slow.
	//This is because searching in a linked list takes O(n) time in both the worst and average case.

	//Here's an idea for how to improve search speed:  create a SPEED TABLE!

	//The idea:  Since linked lists take longer to search the longer they are, break up the n items of the list into
	//multiple different shorter lists, stored within an array of lists.  The idea is that each of these shorter
	//lists may now be searched more quickly.  For example, suppose you have an array of ten linked lists:
	//linkedList * table = new linkedList[10].
	//Every time you insert a number x, choose to put x into the list corresponding to the last digit of x.
	//For example, suppose x= 45308.  Then x should be inserted into table[8];  If x=6233, it should go into table[3].
	//In general, x should go into table[ x % H ] where H denotes the size of your table.

	//The advantage:  now the n items stored in your data structure are roughly divided up into 10
	//different lists, making each individual list about 1/10th the original length.  So, searching any
	//of these shorter lists should be faster.  For example, if you want to find value x=4598873, you know that you
	//only need to search list table[3], and do not need to search any of the other items in the data structure.

	//Run time:  On average, for a total of n items and table size H, each list is only of length n/H,
	//making search take a faster O(n/H) time on average.
	//By making the table larger and larger, you should expect searching to become faster and faster.

	//Now implement this idea.
	///////////////////////////////////////////////////////////////////////////////////////////////////

	//Parameterized constructor should set the size of the table to be specified size
	hashTable myTable(10);

	myTable.insert(5389);
	myTable.insert(65193);
	myTable.insert(16748);
	myTable.insert(6490);
	myTable.insert(5582);
	myTable.insert(53479);
	myTable.insert(9345);
	myTable.insert(568934);
	myTable.insert(6493);
	myTable.insert(5489);
	myTable.insert(5948);
	myTable.insert(52393);
	myTable.insert(95611);

	cout << myTable.contains(52393) << endl; //true
//	cout << myTable.contains(354912) << endl; //false

//	myTable.remove(52393);

//	cout << myTable.contains(52393) << endl; //false


//	myTable.showTable(); //print out the contents of each list (one line for each list) to verify the items are hashed correctly

	//Part 3:  What is the average case run time of your table's contains and remove methods in terms of the number of items n,
	//and the size of the table H?

	return 0;
}