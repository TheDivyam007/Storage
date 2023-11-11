#include <iostream>

// Function to calculate factorial using recursion
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    // Input: Change the value of 'num' to calculate the factorial of a different number
    int num = 5;

    // Calculate and display the factorial
    std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;

    return 0;
}
