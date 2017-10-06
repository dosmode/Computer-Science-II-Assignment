// Hw27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void listPrimes(int a) {
	int i, j;
	for (i = 2; i < a; i++) {
		for (j = 2; j <= i - 1; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			cout << i << endl;
		}
	}
}

int main(){
	listPrimes(15);
    return 0;
}

