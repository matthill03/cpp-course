#include <iostream>
#include <vector>

int main() {
    
    //std::vector <int> test_scores;                 //empty
    //std::vector <int> test_scores (5);           // 5 intialized to zero
    //std::vector <int> test_scores (5, 100);   // 5 elements intialized to 100    
    
    std::vector <int> test_scores {100, 95, 87};
    
    std::cout << test_scores.at(0) << std::endl;
    //std::cout << test_scores[0] << std::endl;

    std::cout << "There are " << test_scores.size() << " scores in the vector" << std::endl;

    int score_to_add {0};
    std::cout << "Enter a score to add: " << std::endl;
    std::cin >> score_to_add;
    
    test_scores.push_back(score_to_add);
    
    std::cout << "There are " << test_scores.size() << " scores in the vector" << std::endl;
    
    //Using a 2D vector
    std::vector<std::vector<int>> movie_ratings
    {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };
    
    std::cout << "Rating at 0,0 is: " << movie_ratings[0][0] << std::endl;
    std::cout << "Rating at 0,0 is: " << movie_ratings.at(0).at(0) << std::endl;
        
    return 0;
}
