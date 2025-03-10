//Function to calculate factorial
#include <iostream>

int main() {
    //Variable to store the number
    int number;
    //Variable to show factorial 
    int factorial = 1;

    std::cout << "Enter a positive integer and I will give you its factorial result: ";
    std::cin >> number;

    for (int i = 1; i <= number; i++) {
        factorial = factorial * i;
    }

    std::cout << "The factorial of " << number << " is: " << factorial << std::endl;
    return 0;
}
