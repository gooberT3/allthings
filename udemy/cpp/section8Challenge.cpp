#include <iostream>

const int DOLLAR = 100,
          QUARTER = 25,
          DIME = 10,
          NICKEL = 5,
          PENNY = 1;

int main() {
    int cents = 0;
    std::cout << "Enter an integer in terms of the USA currency 'cents': ";
    std::cin >> cents;

    int dollarCount = 0,
        quarterCount = 0,
        dimeCount = 0,
        nickelCount = 0,
        pennyCount = 0;
    if(cents >= DOLLAR) {
        dollarCount = cents / DOLLAR;
        cents = cents % 100;
    }
    if(cents >= QUARTER) {
        quarterCount = cents / QUARTER;
        cents = cents % 25;
    }
    if(cents >= DIME) {
        dimeCount = cents / DIME;
        cents = cents % 10;
    }
    if(cents >= NICKEL) {
        nickelCount = cents / NICKEL;
        cents = cents % 5;
    }
    if(cents >= PENNY) {
        pennyCount = cents / PENNY;
        cents = cents % PENNY;
    }

    std::cout << "Your amount of change in USD is:\n"
              << "Dollars: " << dollarCount << std::endl
              << "Quarters: " << quarterCount << std::endl
              << "Dimes: " << dimeCount << std::endl
              << "Nickels: " << nickelCount << std::endl
              << "Pennies: " << pennyCount << std::endl;

    return 0;
}
