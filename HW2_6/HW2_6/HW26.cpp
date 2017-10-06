// HW26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <string>

void capitalize(string &str) {
	
	for (int i = 0; i < str.length(); i++) {
		str[i]= toupper(str[i]);	//get some idea about toupper from http://www.cplusplus.com/reference/cctype/toupper/
	}
}

int main()
{
	string name2 = "brenda";
	capitalize(name2);
	cout << name2 << endl;
    return 0;
}

