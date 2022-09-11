#include <iostream>

int main() {

    int num1{}, num2 {};

    std::cout << "Enter 2 integers seperated by a space:" << std::endl;
    std::cin >> num1 >> num2;

    std::cout << num1 << " > " << num2 << " : " << (num1 > num2) << std::endl;
    std::cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << std::endl;
    std::cout << num1 << " < " << num2 << " : " << (num1 < num2) << std::endl;
    std::cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << std::endl;

    return 0;
}