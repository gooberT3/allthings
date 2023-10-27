// Compiler Errors have two types, Syntax or Semantic.
//
// Syntax errors are problems having to do with the structure of the program.
// i.e. forgetting a semicolon.
// 
// Semantic errors are problems with the logic of the program.
// i.e. attempting to add two variables of different data types.

// preprocessor directives
#include <iostream>

// function main
int main() {
      // syntax error, missing ending quote on string literal
      std::cout << "Hello, World! << std::endl;   

      // semantic error, attempting to return a string in a function which returns an integer
      return "Jacob";
}
