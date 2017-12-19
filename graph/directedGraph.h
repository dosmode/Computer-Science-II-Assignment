//
// Created by Jungsik Jackson Byun on 11/28/17.
//

#ifndef GRAPH_DIRECTEDGRAPH_H
#define GRAPH_DIRECTEDGRAPH_H
#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

class directedGraph {
private:
    class vertex {
    public:
        string data;
        vector<vertex *> neighbors;
        vertex *pred;
        bool visited;

        vertex(string x) {
            data = x;
            pred = NULL;
            visited = false;
        }
    };

    vector<vertex *> vertexList;

public:
    void addVertex(string x) {
        vertex *babyVertex = new vertex(x);
        vertexList.push_back(babyVertex);
    }

    void display() {
        for (int i = 0; i < vertexList.size(); i++) {
            cout << vertexList[i]->data << " :: ";

            for (int j = 0; j < vertexList[i]->neighbors.size(); j++) {
                cout << vertexList[i]->neighbors[j]->data << ", ";
            }
            cout << endl;
        }
    }

    void addEdge(string x, string y) {
        vertex *prtX = findVertex(x);
        vertex *prtY = findVertex(y);

        prtX->neighbors.push_back(prtY);
    }

    vertex *findVertex(string x) {
        for (int i = 0; i < vertexList.size(); i++) {
            if (vertexList[i]->data == x) {
                return vertexList[i];
            }
        }
        return NULL;
    }


    void testBreadthFirstSearch(string x) {
        cout << endl;
        BreadthFirstSearch(findVertex(x));
    }

    void BreadthFirstSearch(vertex *s) {

        //mark all S's false

        //Q.eng(s)
        queue<vertex *> Q;
        s->visited = true;
        Q.push(s);
        vertex *X;

        cout << "First value " << s->data << endl;


        while (!Q.empty()) {
            s = Q.front();
            X = s;
            Q.pop();
            for (int i = 0; i < X->neighbors.size(); i++) {

                if (!X->neighbors[i]->visited) {
//                    //not sure here
                    X->neighbors[i]->visited = true;
                    X->neighbors[i]->pred = X;
//
                    Q.push(X->neighbors[i]);
                    cout << "vertex : " << X->neighbors[i]->data << "(from " << X->neighbors[i]->pred->data << ")";
                    cout << " -> ";
                }
            }

        }

    }

    void shortestPath(string a, string b) {
        shortestPath(findVertex(a), findVertex(b));
    }


    void shortestPath(vertex *x, vertex *y) {
        queue<vertex *> Q;

    }
};


#endif //GRAPH_DIRECTEDGRAPH_H
