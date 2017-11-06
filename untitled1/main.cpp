#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    float first, second;
    ifstream myfile;
    myfile.open("input.txt");
    myfile>>first;
    myfile>>second;

    if(second == 0){
        cout<<"Cannot divided by zero";
    }

    ratio(first, second);
    return 0;
}
void ratio(float first, float second){
    float temp;
    temp = first/second;
    cout<<fixed<<setprecision(1)<<temp;
}