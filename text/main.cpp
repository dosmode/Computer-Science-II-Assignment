#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

double internetPackage(char a, int h);


struct MyStruct             //learning vector sorting fromt the stackoverflow
{                           //https://stackoverflow.com/questions/1380463/sorting-a-vector-of-custom-objects
public:
    double calculatedPrice;
    std::string stringValue;
    MyStruct(double k, const std::string& s){
        calculatedPrice=k;
        stringValue=s;
    }
};

struct less_than_key
{
    inline bool operator() (MyStruct& par1, MyStruct& par2)
    {
        return (par1.calculatedPrice < par2.calculatedPrice);
    }
};


class customerList {


public:
    int customerNumber;
    string a[5][3];

    void customer() {
        customerNumber = 0;
    }

    void customer(int n) {
        customerNumber = n;
    }

    void looper(istream &inputFile, ofstream &outputFile) {

        for (int i = 0; i <= customerNumber; i++) {
            for (int j = 0; j <= 2; j++) {
                inputFile >> a[i][j];
            }
        }

        vector <MyStruct> vec;
        for (int i1=0;i1<=4;i1++){
            const char *b = a[i1][1].c_str();                                             //str.c_str()string to char for first parameter of internetPackage()
           vec.push_back(MyStruct(internetPackage(*b, stoi(a[i1][2])),a[i1][0]));           //stoi() string to int for first parameter of internetPackage()
        }                                                                                  //http://www.cplusplus.com/reference/cstdlib/atoi/

        sort(vec.begin(),vec.end(),less_than_key());

        for (int i1=0;i1<5;i1++) {

            outputFile<<vec[i1].stringValue<< " $" << vec[i1].calculatedPrice << endl;
        }
    }
};



double internetPackage(char a, int h){
    double aPrice=9.95,bPrice=14.95,cPrice=19.95;

    if(h>744){
        cout<< "The number of hours used in a month cannot exceed 744" <<endl;

    }else {
        switch (a) {
            case 'A':
            case 'a':

                if (h > 10) {
                    return aPrice + (h-10) * 2;
                }else return aPrice;
                break;

            case 'B':
            case 'b':

                if (h > 20) {
                    return bPrice + (h-20) * 1;
                }else return bPrice;

                break;

            case 'C':
            case 'c':

                return cPrice;

                break;
        }
    }
}

int main() {
    string name;
    char package;
    int hours;
    int customerNumber;

    ifstream inFile;
    inFile.open("list.txt");

    inFile>>customerNumber;     //read and save customer number from text file to int customerNumber

    customerList customer;      //create class

    customer.customer(customerNumber);     //pass a value to class function customer()

    ofstream outFile;   //create billing.dat
    outFile.open("billing.dat");

    customer.looper(inFile, outFile);
    inFile.close();
    outFile.close();

}

