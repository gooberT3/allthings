// Linker errors occur when the linker is having problems with linking all the object files together to create an executable.
// These errors will not throw when compiling but when building.

// preprocessor directives
#include <iostream>

// defining and saying that 'foo' is not part of this program but stored in another file
extern int foo;

// function main
int main() {
      // display to the user the integer stored in 'foo'
      // throws an error because it cannot find where 'foo' is located in order to access it's value
      std::cout << foo;

      return 0;
}
