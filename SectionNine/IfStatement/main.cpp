#include <iostream>

int main() {

    int num{};
    const int min {10};
    const int max {100};

    std::cout << "Enter a number between " << min << " and " << max << std::endl;
    std::cin >> num;

    if (num >= min) {
        std::cout << "\n================ If statement 1 ================" << std::endl;
        std::cout << num << " is greater than " << min << std::endl;

        int diff {num - min};
        std::cout << num << " is " << diff << " greater than " << min << std::endl;
    }

    if (num <= max) {
        std::cout << "\n================ If statement 2 ================" << std::endl;
        std::cout << num << " is less than or equal to " << max << std::endl;

        int diff {max - num};
        std::cout << num << " is " << diff << " less than " << max << std::endl;
    }

    if (num >= min && num <= max) {
        std::cout << "\n================ If statement 3 ================" << std::endl;
        std::cout << num << " is in range" << std::endl;
        std::cout << "This means tha statements 1 and 2 must also be true" << std::endl;
    }

    if (num == min || num == max) {
        std::cout << "\n================ If statement 4 ================" << std::endl;
        std::cout << "Num is right of the boundry" << std::endl;
        std::cout << "This means all the if statements have run" << std::endl;
    }

    std::cout << std::endl;
    return 0;
}