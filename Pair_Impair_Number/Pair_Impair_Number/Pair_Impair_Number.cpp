#include <iostream>

int main() {
    //Calculation of even and odd numbers
    //Variable to store integer number
    int number;
    std::cout << "Enter a positive integer and I will give you its even and odd numbers: ";
    std::cin >> number;
    std::cout << "The even numbers are: \n";

    //Create an iteration to check each number to determine which ones are even and print them
    for (int i = 0; i <= number; i++) {
        if (i % 2 == 0) {
            std::cout << i << "\n";
        }
    }
    std::cout << "The odd numbers are: \n";
    //Create an iteration to check each number to determine which ones are odd and print them
    for (int i = 0; i <= number; i++) {
        if (i % 2 != 0) {
            std::cout << i << "\n";
        }
    }
    return 0;
}
