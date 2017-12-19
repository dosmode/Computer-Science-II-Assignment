#ifndef DIRECTEDGRAPH_H
#define DIRECTEDGRAPH_H

#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <iomanip>
#include <unistd.h>
using namespace std;

class directedGraph {
protected:
    class vertex {
    public:
        string cityName;
        string map;
        vector<vertex *> neighbors;
        bool mark;
        int cost;
        int number;
        int cityPrice;


        vertex(string x) {
            cityName = x;
            map = "☐";
            mark = false;
            number=0;
        }

    };

    //maintain a cityName structure holding all vertices
    vector<vertex *> vertexList;

    //private helper methods

    //return vertex with x as cityName field
    vertex *findVertex(string x) {
        for (int i = 0; i < vertexList.size(); i++) {
            if (vertexList[i]->cityName == x)
                return vertexList[i];
        }
        return NULL;
    }
    vertex *findVertex(int x) {
        for (int i = 0; i < vertexList.size(); i++) {
            if (vertexList[i]->number == x)
                return vertexList[i];
        }
        return NULL;
    }

public:

    void addVertex(string x) {
        vertex *babyVertex = new vertex(x);
        vertexList.push_back(babyVertex);
    }

    //add a one-way edge
    void addDirectedEdge(string x, string y) {
        vertex *ptrX = findVertex(x);
        vertex *ptrY = findVertex(y);

        ptrX->neighbors.push_back(ptrY);
        ptrY->neighbors.push_back(ptrX);
    }


   void display() {
        for (int i = 0; i < 9; i++) {
            cout << setw(15) << vertexList[i]->cityName;

            //Map number test;
            //cout<<vertexList[i]->number;
        }
        cout << endl;
        for (int i = 0; i < 9; i++) {
            cout << setw(17) << vertexList[i]->map;
        }
        cout << endl<<endl;
        for (int i = 9; i < 18; i++) {
            cout << setw(14) << vertexList[i]->cityName << vertexList[i]->map<<setw(122)<<vertexList[(i+9)]->map <<vertexList[i+9]->cityName<<endl<<endl;
        }
        for (int i = 27; i < 36; i++) {
            cout << setw(17) << vertexList[i]->map;
        }
        cout<<endl;
        for (int i = 27; i < 36; i++) {
            cout << setw(15) << vertexList[i]->cityName;
        }




        cout <<endl;
//        for (int i = 11; i < 21; i++) {
//            cout << setw(119) << vertexList[i + 1]->map
//                 << vertexList[i + 1]->cityName;
//            cout << endl;
//        }
//
//        cout << endl;
    }

    void numbering() {

        int j = 0;
        int z = 1000;

        //0~8 Start through Istanbul
        for (int i = 0; i < 9; i++) {
            vertexList[i]->number = j;
            vertexList[i]->cityPrice = i*z*1.1;
            j++;
        }
        //9~18 Buenos Aires through Edinburg
        for(int i = 18; i<28; i++){
            vertexList[i]->number = j;
            vertexList[i]->cityPrice = i*z*1.2;
            j++;
        }
        j=26;
        for (int i = 27; i < 36; i++) {
            vertexList[i]->number=j;
            vertexList[i]->cityPrice = i*z*1.3;
            j--;
        }
        //19~27
        j=35;
        for (int i = 9; i < 18; i++) {
            vertexList[i]->number=j;
            vertexList[i]->cityPrice = i*z*1.4;
            j--;
        }

//
    }
};

#endif