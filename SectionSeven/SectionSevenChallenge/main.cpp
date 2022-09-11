#include <iostream>
#include <vector>

int main() {
    
    std::vector <int> vector1;
    std::vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    std::cout << "Vector 1 size is: " << vector1.size() << std::endl;
    std::cout << "Element 1 is: " << vector1.at(0) << std::endl;
    std::cout << "Element 2 is: " << vector1.at(1) << std::endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    std::cout << "Vector 2 size is: " << vector2.size() << std::endl;
    std::cout << "Element 1 is: " << vector2.at(0) << std::endl;
    std::cout << "Element 2 is: " << vector2.at(1) << std::endl;
    
    std::vector<std::vector<int>> vector_2d;
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    std::cout << "Elements of vector_2d: " << std::endl;
    std::cout << "Element 1 is: " << vector_2d.at(0).at(0) << std::endl;
    std::cout << "Element 2 is: " << vector_2d.at(0).at(1) << std::endl;
    std::cout << "Element 3 is: " << vector_2d.at(1).at(0) << std::endl;
    std::cout << "Element 4 is: " << vector_2d.at(1).at(1) << std::endl;
    
    vector_2d.at(0).at(0)    = 1000;
    
    std::cout << "Elements of vector_2d: " << std::endl;
    std::cout << "Element 1 is: " << vector_2d.at(0).at(0) << std::endl;
    std::cout << "Element 2 is: " << vector_2d.at(0).at(1) << std::endl;
    std::cout << "Element 3 is: " << vector_2d.at(1).at(0) << std::endl;
    std::cout << "Element 4 is: " << vector_2d.at(1).at(1) << std::endl;
        
    return 0;
}
