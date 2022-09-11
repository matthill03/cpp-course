#include <iostream>

int main(){
    /**************************
     * Character Types
     **************************/
    char middle_initial {'j'};  // single quotes are for characters
    std::cout << "My middle initial is " << middle_initial << std::endl; 
    
    /**************************
     * Integer Types 
     **************************/
        unsigned short int exam_score {55};  // same as unsigned short exam_score {55}
        std::cout << "My exam score was " << exam_score << std::endl;

        int countries_represented {65};
        std::cout << "There were " << countries_represented 
                       << " countries represented in my meeting" << std::endl; 

        long people_in_florida {20610000};
        std::cout << "There are about " << people_in_florida << " people in florida"
                       << std::endl;
        
         long long people_on_earth {7'600'000'000};
         std::cout << "There are about " << people_on_earth << " people on earth" 
                        << std::endl;
                        
         /**************************
          * Floating Point Types
          **************************/
        
        float car_payment {401.23};
        std::cout << "My car payment is " << car_payment << std::endl;
        
        double pi {3.14159};
        std::cout << "Pi is " << pi << std::endl;
        
        long double large_amount {2.7e120};
        std::cout << large_amount << " is a very big number" << std::endl;

        /**************************
          * Boolean Type
          **************************/
        
        bool game_over {false};
        std::cout << "The value of game_over is " << game_over << std::endl;
                       
    return 0;
}
