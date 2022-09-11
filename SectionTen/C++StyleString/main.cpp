#include <iostream> 
#include <string.h>

int main() {

    std::cout << "Hello World" << std::endl;
    
    std::string out1  = "Matthew";

    for (int c : out1) {
        std::cout << c << std::endl;
        // outputs the ASCII codes for characters.
    }

    std::cout << out1.substr(0, 4) << std::endl; // outputs Matt
    std::cout << out1.find("Matt") << std::endl; // outputs 0, as 'Matt' starts at index 0 of string
    std::cout << out1.length() << std::endl; // outputs length of "Matthew"

    out1 += "Hill";
    std::cout << out1 << std::endl; // concatenates "Hill" onto "Matthew"
    

    std::string input;
    // std::cin >> input; // "Hello World" - only reads up to first space
    // std::cout << input << std::endl;

    std::cout << "Enter your full name: ";
    getline(std::cin, input);
    std::cout << input << " this took a long time to get!!" << std::endl;
    
    std::cout << input + " this took a long time to get!!" << std::endl;
    return 0;
}
