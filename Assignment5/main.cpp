#include <iostream>

using namespace std;

class Calculator {
private:
    float result;
    int numItems = 0;
    float *items = new float[10];

public:
    Calculator() {
        result = 0;
        items[numItems] = result;
        numItems++;
    }

    void clear() {
        result = 0;
        items[numItems] = result;
        numItems++;
    }

    void add(float a) {
        result += a;
        items[numItems] = result;
        numItems++;
    }

    void divide(float a) {
        result /= a;
        items[numItems] = result;
        numItems++;
    }

    void multiply(float a) {
        result *= a;
        items[numItems] = result;
        numItems++;
    }

    void subtract(float a) {
        result -= a;
        items[numItems] = result;
        numItems++;
    }

    Calculator(int a) {

        result = a;
        this->items[numItems] = result;
        numItems++;
    }

    void undo() {

        numItems--;
        result = items[numItems - 1];
    }

    void redo() {
        numItems++;
        result = items[numItems - 1];
    }

    Calculator operator+(const Calculator &b) {
        Calculator calculator;
        calculator.result = this->result + b.result;
        items[numItems] = calculator.result;
        numItems++;
        return calculator;
    }

    float display() {
        return result;
    }
};

int main() {

    Calculator mycalc;
    mycalc.clear();
    mycalc.add(4.52);
    mycalc.add(3.789);
    mycalc.divide(2.6);
    mycalc.multiply(3.12);
    mycalc.subtract(2.678);
    cout << mycalc.display() << endl;       // prints out "7.2928"
    mycalc.clear();
    mycalc.add(5.0);
    cout << mycalc.display() << endl;       // prints out "5"

//advanced stuff #1: add a constructor
    Calculator calc1;
    cout << calc1.display() << endl;  //prints out 0

//advanced stuff #2: add a parameterized constructor
    Calculator calc2(5);
    cout << calc2.display() << endl; //prints out 5

//advanced stuff #3: Define calculator addition (overload the '+' operator) (see: http://lmgtfy.com/?q=+c%2B%2B+operator+overloading)
    Calculator calc3(7);
    calc1 = calc2 + calc3;
    cout << calc1.display() << endl;  //prints out 12

//advanced stuff #4 (10 points extra credit): Create an 'undo' method for the calculator
    mycalc.undo();
    mycalc.undo();
    cout << mycalc.display() << endl;  //prints out 7.2928

//advanced stuff #5 (10 points extra credit): Create a 'redo' method for the calculator
    mycalc.redo();
    mycalc.redo();
    cout << mycalc.display() << endl;  //prints out 5
}