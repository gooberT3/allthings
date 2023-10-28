// preprocessor directives
#include <iostream>
#include <iomanip>

// declare and initialize constant for how many people with are calcualting
const int ARRAY_SIZE = 5;

// define a struct to store data for each person
struct TaxPayer {
      std::string last_name;
      float tax_rate,
            income,
            taxes;
};

// function main
int main() {
      // define array of type TaxPayer
      TaxPayer citizen[ARRAY_SIZE]; 

      // prompt the user to enter each tax payer's information
      std::cout << "Please enter the annual income and tax rate for 5 tax payers:\n\n";

      for(int i = 0; i < ARRAY_SIZE; i++) {
            std::cout << "Enter the last name of the tax payer " << i + 1 << ": ";
            std::cin >> citizen[i].last_name;

            std::cout << "Enter this year's income for tax payer " << i + 1 << ": ";
            std::cin >> citizen[i].income;

            std::cout << "Enter the tax rate for tax payer #" << i + 1 << ": ";
            std::cin >> citizen[i].tax_rate;

            std::cout << std::endl;
      }

      // calculate the total taxes for each tax payer within the array
      for(int i = 0; i < ARRAY_SIZE; i++) {
            citizen[i].taxes = citizen[i].tax_rate * citizen[i].income;
      }

      // format output
      std::cout << std::fixed << std::showpoint << std::setprecision(2);

      // display to the user the taxes each person entered will need to pay
      for(int i = 0; i < ARRAY_SIZE; i++) {
            std::cout << i + 1 << ". " << citizen[i].last_name << ": $" << citizen[i].taxes << std::endl;
      }

      return 0;
}
