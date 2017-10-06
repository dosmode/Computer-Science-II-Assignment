// HiLowExtra.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void counter(int i) {
	if (i >= 11)
		cout << "What a terrible score!..." << endl;
	if (i >= 9 && i <= 10)
		cout << "Not too shabby, but not too good either...";
	if (i >= 7 && i <= 8)
		cout << "That's pretty good but you can do better...";
	if (i >= 5 && i <= 6)
		cout << "That's very good score...";
	if (i >= 0 && i <= 4)
		cout << "Amazing! Or was it luck?";
}

void loopClass(int computerInput, int randomInput, int fir, int las, int range, int &tries) {
	computerInput = range;
	do {
		cout << "Guess a number between " << fir << " and " << las << endl;
		tries++;
		range = las - fir;
		computerInput = range / 2 + fir;
		cout << "Coimputer's guess : " << computerInput << endl;

		if (randomInput > computerInput) {
			cout << "Too low!!" << endl;
			fir = computerInput;
		}
		else if (randomInput < computerInput) {
			cout << "Too high!!" << endl;
			las = computerInput;
		}
		else
			cout << "You win!!" << endl;
	} while (computerInput != randomInput);
	cout << "It took you " << tries << " guesses." << endl;
}

int randomNumberCreator(int ran) {
	return rand() % ran;
}

int main()
{
	int randomNumber;
	int answer = 0;
	int tries = 0;
	int inputFirst = 100, inputLast = 1000;
	int inputRange = 0;

	inputRange = inputLast - inputFirst;

	randomNumber = randomNumberCreator(inputRange) + inputFirst + 1;

	cout << "Let's play a Number Gussing Game!" << endl;

	loopClass(answer, randomNumber, inputFirst, inputLast, inputRange, tries);
	counter(tries);

	return 0;
}


