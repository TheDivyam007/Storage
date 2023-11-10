#include <iostream>

int main() {
    const int arraySize = 5; // Change the size according to your array
    int myArray[arraySize];

    // Input values into the array
    std::cout << "Enter " << arraySize << " elements for the array:\n";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> myArray[i];
    }

    // Calculate the sum
    int sum = 0;
    for (int i = 0; i < arraySize; ++i) {
        sum += myArray[i];
    }

    // Output the sum
    std::cout << "The sum of the elements in the array is: " << sum << std::endl;

    return 0;
}
