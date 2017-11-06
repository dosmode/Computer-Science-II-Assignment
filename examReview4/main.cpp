#include <iostream>
using namespace std;

int main() {
int arrayNumber;


    cout<<"welcome! How many dogs do you own?"<<endl;
    cin>>arrayNumber;
    string * items = new string[arrayNumber];
    cout<<"Ok, enter the names!"<<endl;

    for(int i =0 ; i<arrayNumber; i++){
    cin>>items[i];
    }

    for(int j =0 ; j<arrayNumber ; j++){
    for(int z = j+1; z<arrayNumber-1; z++){
        if(items[j]>items[z]){
            string temp;
            temp = items[z];
            items[z] = items[j];
            items[j]=temp;
        }
    }
    }
    cout<<"Thanks, here are the names you entered: ";
    for(int a = 0 ; a<arrayNumber ; a++){
        cout<<items[a]<<" ";
    }

    return 0;
}