#include <iostream>
using namespace std;

// Function to calculate the area of a trapezium
double trapeziumArea(double base1, double base2, double height) {
    return 0.5 * (base1 + base2) * height;
}

int main() {
    // Input the values of the bases and height
    double base1, base2, height;

    cout << "Enter the length of the first base: ";
    cin >> base1;

    cout << "Enter the length of the second base: ";
    cin >> base2;

    cout << "Enter the height: ";
    cin >> height;

    // Calculate and display the area
    double area = trapeziumArea(base1, base2, height);
    cout << "The area of the trapezium is: " << area << endl;

    return 0;
}
