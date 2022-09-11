#include <iostream>

int main(){
    
    const int small_room_cost {25};
    const int large_room_cost {35};
    const double tax_rate {0.06};
    
    int num_small_rooms {0};
    int num_large_rooms {0};
        
    std::cout << "Enter the the number of small and large rooms to be cleaned seperated by a space: ";
    std::cin >> num_small_rooms >> num_large_rooms;
    
    int total_cost_rooms = (num_small_rooms * small_room_cost) + (num_large_rooms * large_room_cost);
    double tax_cost = total_cost_rooms * tax_rate;
    
    std::cout << "Estimate for carpet cleaning service:" << std::endl;
    std::cout << "Number of small rooms: " << num_small_rooms << std::endl;
    std::cout << "Number of large rooms: " << num_large_rooms << std::endl;
    std::cout << "Price per small room: " << small_room_cost << std::endl;
    std::cout << "Price per large room: " << large_room_cost << std::endl;
    std::cout << "Cost: " << total_cost_rooms << std::endl;
    std::cout << "Tax: " << tax_cost << std::endl;
    
    double total_cost_after_tax = total_cost_rooms + tax_cost;
    
    std::cout << "=======================" << std::endl;
    std::cout << "Total estimate: $" << total_cost_after_tax << std::endl;
    std::cout << "This estimate is valid for 30 days" << std::endl;
    
    return 0;
}
