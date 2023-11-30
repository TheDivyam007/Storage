#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    char operation;

    // Input
    cout << "Enter first integer: ";
    cin >> num1;

    cout << "Enter second integer: ";
    cin >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    // Perform calculation based on the operation
    switch (operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << static_cast<double>(num1) / num2 << endl;
            } else {
                cout << "Error: Cannot divide by zero." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
    }

    return 0;
}
