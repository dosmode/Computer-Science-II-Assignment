// HW2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int maximum(int a, int b, int c) {
	if (b < a && c < a) {
		return a;
	}else if (a < b && c < b) {
		return b;
	}
	else {
		return c;
	}
}
int minimum(int a, int b, int c) {
	if (a < b && a < c) {
		return a;
	}
	else if (b< a && b < c) {
		return b;
	}
	else {
		return c;
	}
}
int main()
{
	cout << "The largest is: " << maximum(5, 22, 18) << endl;
	cout << "The smallest is: " << minimum(15, 18, 16) << endl;
    return 0;
}

