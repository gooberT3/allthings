#include <iostream>

void estimate(int, int);

const float TAX_RATE = 0.06;
const int smallCost = 25,
          largeCost = 35;

int main() {
    std::cout << "Welcome to Jake's carpet cleaning service:\n"
              << "Small room cost = $25\n"
              << "Large room cost = $35\n\n";

    int smallRoomCount = 0;
    std::cout << "How many small rooms would you like cleaned?\n";
    std::cin >> smallRoomCount;

    int largeRoomCount = 0;
    std::cout << "How many large rooms would you like cleaned?\n";
    std::cin >> largeRoomCount;
    std::cout << std::endl;

    estimate(smallRoomCount, largeRoomCount);

    return 0;
}

void estimate(int smallRoomCount, int largeRoomCount) {
    std::cout << "Number of small rooms: " << smallRoomCount << std::endl
              << "Number of large rooms: " << largeRoomCount << std::endl;
    
    int cost = (smallRoomCount * smallCost) + (largeRoomCount * largeCost);
    std::cout << "Total cost before tax: " << cost << std::endl;
    
    float tax = cost * TAX_RATE;
    std::cout << "Cost of tax: " << tax << std::endl << std::endl;

    std::cout << "Total Estimate: " << cost + tax << std::endl
              << "This estimate is valid for only 30 days.\n";
}
