#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, area, circumference;

    // Prompt the user to enter the radius of the circle
    cout << "Find the area and circumference of any circle :" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Input the radius(1/2 of diameter) of a circle : ";
    cin >> radius;

    // Calculate area and circumference
    area = M_PI * pow(radius, 2);
    circumference = 2 * M_PI * radius;

    // Display the results
    cout << "The area of the circle is : " << area << endl;
    cout << "The circumference of the circle is : " << circumference << endl;

    return 0;
}
