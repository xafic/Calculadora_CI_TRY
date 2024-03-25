#include <iostream>

#include "SimpleCalc.h"
// using directive
using namespace std;

int main() {
    SimpleCalc Calculator;

    char op;
    double num1,num2,result;

    cout << "Enter number1: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter number2: ";
    cin >> num2;

    switch(op){
        case '+':
        result = Calculator.add(num1,num2);
        break;

        case '-':
        result = Calculator.sub(num1,num2);
        break;

        case '*':
        result = Calculator.mul(num1,num2);
        break;

        case '/':
        result = Calculator.div(num1,num2);
        break;

        default:
        cout << "Error!! invalid operator";
        //return -1;
        return 0;
    }
    cout << "Result: " << result << endl;
    return 0;
}

