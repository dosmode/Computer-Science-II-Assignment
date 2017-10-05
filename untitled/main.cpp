#include <iostream>
#include <string>
using namespace std;

void counter(int i) {
    if(i>=11)
        cout << "What a terrible score!..." << endl;
    if(i>=9 && i<=10)
        cout << "Not too shabby, but not too good either...";
    if(i>=7 && i<=8)
        cout << "That's pretty good but you can do better...";
    if(i>=5 && i<=6)
        cout << "That's very good score...";
    if(i>=0 && i<=4)
        cout << "Amazing! Or was it luck?";
}
void loopClass(int input,int randomInput,int fir,int las, string name, int &tries) {

    do {
        cout << "Guess a number between " << fir << " and " << las << endl;
        tries++;
        cin >> input;
        if (fir > input) {
            cout << "This number below than what you wish start" << endl;
        }
        else if (las < input) {
            cout << "This number above than what you wish end" << endl;
        }
        else if (randomInput > input) {
            cout << "Too low!!" << endl;
            int ran=rand() % 2;
            if (ran == 0) {
                cout << "Hey " << name << " cheer up!" << endl;
            }
        }
        else if (randomInput< input) {
            cout << "Too high!!" << endl;
            int ran = rand() % 2;
            if (ran == 0) {
                cout << "Hey " << name << " calm down!" << endl;
            }
        }
        else
            cout << "You win!!" << endl;
    } while (input != randomInput);
    cout << "It took you " << tries << " guesses." << endl;
}
int main()
{
    int randomNumber;
    int inputNumber=0;
    int tries = 0;
    int inputFirst, inputLast = 0;
    int inputRange=0;
    string name;

    cout << "Please give me a number you wish start" << endl;
    cin >> inputFirst;
    cout << "Please give me a number you wish end" << endl;
    cin >> inputLast;
    inputRange = inputLast - inputFirst;
    randomNumber = rand() % (inputRange) + inputFirst + 1;
    cout << "Please tell me your name" << endl;
    cin>>name;

    cout << "Let's play a Number Gussing Game!" << endl;

    loopClass(inputNumber,randomNumber,inputFirst,inputLast,name,tries);
    counter(tries);

    return 0;
}

