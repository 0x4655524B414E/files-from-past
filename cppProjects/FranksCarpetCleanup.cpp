#include <iostream>

int main()
{
    const double smallRoomCharge {25};
    const double largeRoomCharge {35};
    const int estimateValidDay {30};
    const double taxPercentage {0.06};

    std::cout << "Welcome to Frank's Carpet Cleaning Service\n\n";

    std::cout << 
    "Small Room Cleanup Price: $" << smallRoomCharge << 
    "\nLarge Room Cleanup Price: $" << largeRoomCharge << 
    std::endl << std::endl;

    int largeRoomCount;
    std::cout << "How many LARGE rooms would you like cleaned?: ";
    std::cin >> largeRoomCount;

    int smallRoomCount;
    std::cout << "How many SMALL rooms would you like cleaned?: ";
    std::cin >> smallRoomCount;

    std::cout << "\n******************************************\n";
    std::cout << "Cost: $" << smallRoomCharge * smallRoomCount + largeRoomCharge * largeRoomCount << std::endl;
    std::cout << "Tax: $" << (smallRoomCharge * smallRoomCount + largeRoomCharge * largeRoomCount) * taxPercentage << std::endl;
    std::cout << "==========================================\n";
    std::cout << "Total Estimate: $" << (smallRoomCharge * smallRoomCount + largeRoomCharge * largeRoomCount) * (1 + taxPercentage) << std::endl;
    std::cout << "Estimates are valid for " << estimateValidDay << " days";

    return 0;
}