    /*
        Ask the user to enter 3 integers
        Calculate the sum of the integers then
        claculate the average of the 3 integers

        Display the 3 integers entered
        the sum of the 3 integers and 
        the average of the 3 integers
    */

#include <iostream>

int main() {

    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};

    std::cout << "Enter 3 integers seperated by spaces: ";
    std::cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average {0.0};

    average = static_cast<double>(total) / count;
    //average = (double)total / count; This is the old style of casting.

    std::cout << "The 3 numbers were: " << num1 << "," << num2 << "," << num3 << std::endl;
    std::cout << "The total of the 3 numbers was : " << total << std::endl;
    std::cout << "The average of the 3 numbers was: " << average << std::endl;

    std::cout << std::endl;
    return 0;
}