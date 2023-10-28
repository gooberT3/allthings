// Namespaces are naming conventions condensed into containers,
// using them can cause naming conflicts

// preprocessor directives
#include <iostream>
// namespace
using namespace std;
// or
using std::cout;
using std::cin;
using std::endl;

// function main
int main() {
      // define a string to hold the user's name
      std::string name;

      // prompt the user to enter their name
      cout << "Enter your name: ";
      cin >> name;

      // display the user's name back to the user
      cout << "Your name is " << name << endl;

      return 0;
}
