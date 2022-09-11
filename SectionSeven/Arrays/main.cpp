#include <iostream>

int main() {
    
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    std::cout << "The first vowel is: " << vowels[0] << std::endl;
    std::cout << "The last vowel is: " << vowels[4] << std::endl;
    
    double hi_temps[] {90.1, 89.8, 77.5, 81.6};
    std::cout << "The first high temperature is: " << hi_temps[0] << std::endl;
    
    hi_temps[0] = 100.7;
    
    std::cout << "The first high temperature is now: " << hi_temps[0] << std::endl;
    
    int test_scores[] {100, 90, 80, 70, 60};
    
    std::cout << "First score at index 0: " << test_scores[0] << std::endl;
    std::cout << "Second score at index 1: " << test_scores[1] << std::endl;
    std::cout << "Third score at index 2: " << test_scores[2] << std::endl;
    std::cout << "Fourth score at index 3: " << test_scores[3] << std::endl;
    std::cout << "Fifth score at index 4: " << test_scores[4] << std::endl;
    
    std::cout << "Enter 5 test scores: ";
    std::cin >> test_scores[0];
    std::cin >> test_scores[1];
    std::cin >> test_scores[2];
    std::cin >> test_scores[3];
    std::cin >> test_scores[4];
    
    std::cout << "Updated test scores:" << std::endl;
    std::cout << "First score at index 0: " << test_scores[0] << std::endl;
    std::cout << "Second score at index 1: " << test_scores[1] << std::endl;
    std::cout << "Third score at index 2: " << test_scores[2] << std::endl;
    std::cout << "Fourth score at index 3: " << test_scores[3] << std::endl;
    std::cout << "Fifth score at index 4: " << test_scores[4] << std::endl;
    
    std::cout << "The name of the array is: " << test_scores << std::endl;   
    
    return 0;
}
