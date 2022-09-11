#include <iostream>

int main(){
    int favourite_number;
    
    std::cout << "Enter your favourite number between 1 and 100: ";
    std::cin >> favourite_number;
    
    std::cout << "Amazing!!, That's my favourite number too!" << std::endl;
    std::cout << "No really!!, "<< favourite_number << " is my favouite number!" << std::endl;
    
    return 0;
}

// include, cout, cin, main, std: these are identifires.
// <<, >>, :: : These are "non standard" operators.
// ;, "", {}, (): These are punctuation.
// These all make the syntax of C++.
