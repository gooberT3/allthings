// Logic Errors are errors that cause your program to run incorrectly, these are made by the programmer, their are no errors thrown.
//
// This program is supposed to say that the user is able to vote if they are 18 or older,
// but a logic error appears in the if statement because it only checks if the user is older than 18.

// preprocessor directives
#include <iostream>

// function main
int main() {
      // define a variable to store the user's age
      int age = 0;

      // prompt the user to enter their age
      std::cout << "Enter your age: ";

      // read in the user's age into the 'age' variable
      std::cin >> age;

      // check if the user's age is greater than 18
      if(age > 18) {
            std::cout << "Yes you are able to vote!\n";
      }

      return 0;
}
