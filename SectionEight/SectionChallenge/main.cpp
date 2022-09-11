#include <iostream>

int main() {

    const int pounds {100}, fifty {50}, twenty {20}, ten {10}, five {5}, two {2}, one {1};
    int num_pounds {0}, num_fifty {0}, num_twenty {0}, num_ten {0}, num_five {0}, num_two {0}, num_one {0};
    int userInput {0};

    std::cout << "Enter an amount in cents: ";
    std::cin >> userInput;

    num_pounds = userInput / pounds;
    userInput %= pounds;
    std::cout << "Pounds: " << num_pounds << std::endl;

    num_fifty = userInput / fifty;
    userInput %= fifty;
    std::cout << "Fify: " << num_fifty << std::endl;
    
    num_twenty = userInput / twenty;
    userInput %= twenty;
    std::cout << "Twenty: " <<  num_twenty << std::endl;

    num_ten = userInput / ten;
    userInput %= ten;
    std::cout << "Ten: " <<  num_ten << std::endl;

    num_five = userInput / five;
    userInput %= five;
    std::cout << "Five: " <<  num_five << std::endl;
    
    num_two = userInput / two;
    userInput %= two;
    std::cout << "Two: " <<  num_two << std::endl;

    num_one = userInput / one;
    userInput %= one;
    std::cout << "One: " <<  num_one << std::endl;

    return 0;
}