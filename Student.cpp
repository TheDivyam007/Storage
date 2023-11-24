#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare variables to store user information
    string name;
    int age;
    double height;

    // Get user input
    cout << "Enter your name: ";
    getline(cin, name);  // Using getline to get a full line of input

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height (in meters): ";
    cin >> height;

    // Display the collected information
    cout << "\nUser Information:\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << " years\n";
    cout << "Height: " << height << " meters\n";

    return 0;
}
