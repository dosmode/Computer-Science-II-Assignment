// HWw8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int multiply(int a, int b) {
	int tem=0;
	for (int i = 0; i < b; i++) {
		tem = tem + a;
	}
	return tem;
}
int main()
{
	cout<<multiply(7, 8);
    return 0;
}

