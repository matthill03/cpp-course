#include <iostream>

int main() {

    char selection {};

    do {
        std::cout << "\n-----------------------------------" << std::endl;
        std::cout << "1. Do this" << std::endl;
        std::cout << "2. Do that" << std::endl;
        std::cout << "3. Do something else" << std::endl;
        std::cout << "Q. Quit" << std::endl;
        std::cin >> selection;

        if (selection == '1') {
            std::cout << "You chose 1 - doing this" << std::endl;
        }
        else if (selection == '2') {
            std::cout << "You chose 2 - doing that" << std::endl;
        }
        else if (selection == '3') {
            std::cout << "You chose 3 - doing something else" << std::endl;
        }
        else if (selection == 'q' || selection == 'Q') {
            std::cout << "See ya later bozo" << std::endl;
        }
        else {
            std::cout << "Unkown option -- try again..." << std::endl;
        }

    } while (selection != 'q' && selection != 'Q');
    

    std::cout << std::endl;
    return 0;
}