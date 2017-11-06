#include <iostream>
using namespace std;


void lineOfStarts(int a){

    if(a==0){

    }else {
        cout << "*";
        lineOfStarts(a - 1);
    }
}

void starts(int a){
    if(a==0){

    } else{
        lineOfStarts(a);
        cout<<endl;
        starts(a-1);
        lineOfStarts(a);
        cout<<endl;
    }
}
int power(double x, int n){

    if(n==0){
        return 1;
    }else if(n ==1 ) {
        return x;
    }else {
        return ( x * power(x,n-1));
    }
}

int numOnes(int n){
    if(n==0){
        return 0;
    }else if(n==1) {
        return 1;
    }else
        return numOnes(n/2)+numOnes(n%2);
    }

void reverseArray(double * numbers, int start, int end){
    if(start<end){
        swap(numbers[start],numbers[end]);
        reverseArray(numbers, ++start, --end);
    }
}
int sum(int n){
    if(n==0){
        return 0;
    }else {
        return n+sum(n-1);
    }
}
int threeSum(int n){
    if(n<=0) {
        return 0;
    }else {
        return sum(3*n);
    }
}
class linkedList {
private:
    class node {
    public:
        double data;
        node *next;

        node(double x) {
            data = x;
            next = NULL;
        }
    };

    node *head;

    //print the contents of the list from p to the end (no loops!)
    void printForwards(node *p) {
        if (p == NULL) {

        } else {
            cout << p->data << ",";
            printForwards(p->next);
        }
    }

    //print the contents of the list from p to the end but in reverse order!
    void printBackwards(node *p) {
        if (p == NULL) {

            return;
        } else {
            printBackwards(p->next);
            cout << p->data << ",";
        }
    }

    /* Extra
     * int counter(node * p)
       {
           if(p==NULL){
               return 0;
           }else {
               return 1+counter(p->next);
           }
       }
   */

public:
    linkedList() {
        head = NULL;
    }

    void push_front(double x) {
        node *babyNode = new node(x);
        babyNode->next = head;
        head = babyNode;
    }

    void printForwards() {
        printForwards(head);
    }

    void printBackwards() {
        printBackwards(head);
    }
/*Extra
 * void a(){
        cout<<counter(head);
    }
    */
};
int main() {

    lineOfStarts(5);
    cout<<endl;
    starts(4);
    cout<<endl;
    cout<<power(2,6);
    cout<<endl;
    cout<<numOnes(4894845);
    cout<<endl;
    double arr[]= {1,2,3};
    reverseArray(arr,0,2);
    cout<<arr[2];

    cout<<endl;
    cout<<threeSum(2);
    cout<<endl;
    linkedList list;
    list.push_front(8);
    list.push_front(7);
    list.push_front(6);
    list.push_front(5);
    list.push_front(4);
    list.push_front(3);
    list.push_front(2);
    list.push_front(1);

    list.printForwards(); //1,2,3,4,5,6,7,8,
    cout << endl;
    list.printBackwards(); //8,7,6,5,4,3,2,1,



    return 0;
}