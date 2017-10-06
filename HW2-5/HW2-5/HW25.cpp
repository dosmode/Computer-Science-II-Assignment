// HW25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <string>

string capital(string &str) {
	
	for (int i = 0; i < str.length(); i++) {
		str[i]= toupper(str[i]);	//get some idea about toupper from http://www.cplusplus.com/reference/cctype/toupper/
	}
	return str;
}

int main()
{
	string name = "robbie";
	cout << capital(name) << endl;
    return 0;
}

