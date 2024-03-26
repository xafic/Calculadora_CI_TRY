#include <iostream>
#include "SimpleCalc.cpp"
#include "ScientificCalc.cpp"

using namespace std;





int main(int, char**){
    SimpleCalc SimpleCalculator;
    ScientificCalc ScientificCalculator;

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
        result = SimpleCalculator.add(num1,num2);
        break;

        case '-':
        result = SimpleCalculator.sub(num1,num2);
        break;

        case '*':
        result = SimpleCalculator.mul(num1,num2);
        break;

        case '/':
        result = SimpleCalculator.div(num1,num2);
        break;

        case 'e':
        result = ScientificCalculator.exe(num1,num2);
        break;

        case 's':
        result = ScientificCalculator.sqrt(num1,num2);
        break;

        default:
        cout << "Error!! invalid operator";
        //return -1;
        return 0;
    }
    cout << "Result: " << result << endl;
    return 0;
}
