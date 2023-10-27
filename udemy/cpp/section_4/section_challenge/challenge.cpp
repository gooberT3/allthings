// Section 4 Challenge
// ----------------------------------------
//
// Create a C++ program that asks the user for their favorite number between 1 and 100,
// then read this number from the console.
//
//-----------------------------------------

// preprocessor directives
#include <iostream>

// function main
int main() {
      // define variable 'favorite_num' to store user's favorite number
      int favorite_num = 0;

      // prompt user to enter their favorite number
      std::cout << "Enter your favorite number between 1 and 100: ";

      // read in the user's input from the console
      std::cin >> favorite_num;

      // display to the user that their favorite number is yours too
      std::cout << "Wow, that's my favorite number too!\n";
      std::cout << "No really! " << favorite_num << " is my favorite number too!\n";

      return 0;
}
