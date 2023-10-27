// preprocessor directives
#include <iostream>

// function main
int main() {
      // define and initialize an integer variable
      int user_num = 0;

      // prompt the user to enter an integer
      std::cout << "Enter an intger between 1 and 100: "; 

      // read in the user's input into the variable 'userNum'
      std::cin >> user_num;

      // display to the user the integer they entered
      std::cout << "The number you entered was: " << user_num;

      return 0;
}
