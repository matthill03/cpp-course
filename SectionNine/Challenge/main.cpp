#include <iostream>
#include <vector>

int main() {

    char input{};
    std::vector<int> numbers{};

    do {
        std::cout << "-----------------------------------" << std::endl;
        std::cout << "P - Print numbers" << std::endl;
        std::cout << "A - Add a number" << std::endl;
        std::cout << "M - Display the mean of numbers" << std::endl;
        std::cout << "S - Display the smallest number" << std::endl;
        std::cout << "L - Display the largest number" << std::endl;
        std::cout << "Q - Quit\n" << std::endl;

        std::cout << "Enter your choice: ";
        std::cin >> input;

        switch (input)
        {
        case 'p':
        case 'P':
        {
            if(numbers.size() == 0) {
                std::cout << "[] - List is empty" << std::endl;
            }
            else {
                std::cout << "[";
                for (int num : numbers) {
                    std::cout << " " << num;
                }
                std::cout << " ]" << std::endl;
            } 
            break;
        }  
        case 'a':
        case 'A':
        {
            int number_to_add{};
            std::cout << "Enter a number to add to the list: ";
            std::cin >> number_to_add;

            numbers.push_back(number_to_add);
            std::cout << number_to_add << "added" << std::endl; 
            break;           
        }
        case 'm':
        case 'M':
        {
            if (numbers.empty()){
                std::cout << "Unable to calculate mean - no data" << std::endl;
            }
            else {
                int total{};
                for(int num : numbers) {
                    total += num;
                }
                int mean = total / numbers.size();
                std::cout << "The mean of the list is: " << mean << std::endl;
            }
            break;
        }
        case 's':
        case 'S':
        {
            int smallest{numbers.at(0)};
            if(numbers.empty()){
                std::cout << "Unable to determine the smallest number - list is empty" << std::endl;
            }
            else {
                for(unsigned int i = 0; i < numbers.size(); i++) {
                    if (numbers.at(i) < smallest){
                        smallest = numbers.at(i);
                    }
                }
            }
            std::cout << "The smallest number is: " << smallest << std::endl;
            break;
        }
        case 'l':
        case 'L':
        {
            int largest{};
            if(numbers.empty()) {
                std::cout << "Unable to determine the largest number - list is empty" << std::endl;
            }            
            else {
                for(unsigned int i = 0; i < numbers.size(); i++) {
                    if (numbers.at(i) > largest) {
                        largest = numbers.at(i);                    
                    }
                }
            }
            std::cout << "The largest number is: " << largest << std::endl;
            break;
        }
        case 'q':
        case 'Q':
        {   
            std::cout << "Goodbye - Have a good day!" << std::endl;
            break;
        }
        default:
        {
            std::cout << "Unknown selection, please try again..." << std::endl;
            break;
        }
        }
    } while (input != 'Q' && input != 'q');
   
    std::cout << std::endl;
    return 0;
}