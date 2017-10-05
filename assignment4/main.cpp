#include <iostream>

using namespace std;\

class dice {
private:
    double finalArray[11] = {0};
    int a = 0, b = 0;
    int numPairDice;
    int numthrows;
    int firstDice, secondDice;
    int tries = 0;

public:
    dice() {     //initialize
        numPairDice = 1;
        numthrows = 1000;
    }

    void getNumber(int nDice, int nThrows) {
        numPairDice = nDice;
        numthrows = nThrows;
    }

    void cal() {
        while (a < numPairDice) {
            while (b < numthrows) {
                int save = randomNum();
                for (int i = 2; i <= 12; i++) {
                    if (save == i) {
                        finalArray[i - 2]++;
                        tries++;
                    }
                }
                b++;
            }
            a++;
        }
    }

    double output() {
        for (int i = 0; i < 11; i++) {
            cout << fixed;
            cout.precision(2);
            cout << i + 2 << "         " << finalArray[i] / tries << endl;
        }
    }


    int randomNum() {
        firstDice = rand() % 6 + 1;
        secondDice = rand() % 6 + 1;
        return firstDice + secondDice;
    }
};

int main() {

    int numdice;
    int numthrows;

    dice dice;

    cout << "How many dices do you want to throw" << endl;
    cin >> numdice;

    cout << "How many times do you want to throw?" << endl;
    cin >> numthrows;

    dice.getNumber(numdice, numthrows);
    dice.cal();
    dice.output();
    return 0;
}