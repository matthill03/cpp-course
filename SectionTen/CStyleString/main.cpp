#include <iostream>
#include <cstring>

int main() {

    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    // std::cout << first_name;

    std::cout << "Enter your first name: ";
    std::cin >> first_name;

    std::cout << "Enter your last name: ";
    std::cin >> last_name;
    std::cout << "--------------------------------" << std::endl;

    std::cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << std::endl;
    std::cout << "and you last name, " << last_name << " has " << strlen(last_name) << " characters" << std::endl;

    


    return 0;
}