#include <iostream>
#include <string>
#include <fstream>
using namespace std;



    int main() {
        ifstream data("random1000000.txt");
        int SIZE = 1000000;
        int counter = 0;
        int quickSortArr[SIZE];
        int randomizedQuickSortArr[SIZE];
        int mergeSortArr[SIZE];
        int heapSortArr[SIZE];

        if (data.is_open()) {
            while (!data.eof()) {
                data >> quickSortArr[counter];
                counter++;
            }
        }

        cout<<"quick sort array"<<endl;
        clock_t beginQuick = clock();

        clock_t endQuick = clock();
        cout << "time: " << (beginQuick-endQuick)/double(CLOCKS_PER_SEC)*1000 << "sec" <<endl;
        cout<<endl;
    }
