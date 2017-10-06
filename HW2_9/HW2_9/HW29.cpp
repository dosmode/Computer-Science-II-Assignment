// HW29.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
#include <iostream>

int enigma(int a, int b)
{
	if (b == 0)
	{
		return 1;
	}
	else
	{
		int x = enigma(a, b / 2);
		if (b % 2 == 0)
		{
			return x*x;
		}
		else
		{
			return x*x*a;
		}
	}
}
int main()
{
	cout<<enigma(2, 5);

	return 0;
}

