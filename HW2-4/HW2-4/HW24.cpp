// HW24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int random(int a, int b) {
	int range = b - a;
	return rand() % range + a + 1;
}

int main()
{
	int a = 5;
	int b = 24;
	cout << "A random number between " << a << " and " << b << " is " << random(a, b) << endl;
    return 0;
}

