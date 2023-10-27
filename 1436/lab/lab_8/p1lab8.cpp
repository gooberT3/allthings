// preprocessor directives
#include <iostream>
#include <cstring>
#include <string>

// fucntion main
int main() {
      // part 1
      std::cout << "Part A.1:\n";

      // define c-strings to hold first, middle, and last names 
      const int MAX_CHAR = 25;
      char first[MAX_CHAR], middle[MAX_CHAR], last[MAX_CHAR];

      // read in first name
      std::cout << "Enter your first name: ";
      std::cin.getline(first, MAX_CHAR);

      // read in middle name
      std::cout << "Enter your middle name: ";
      std::cin.getline(middle, MAX_CHAR);

      // read in last name
      std::cout << "Enter your last name: ";
      std::cin.getline(last, MAX_CHAR);

      // define c-string to hold formatted name
      const int COMBINED = 75;
      char nameArranger[COMBINED];

      // format name in c-string style
      strcpy(nameArranger, last);
      strcat(nameArranger, ", ");
      strcat(nameArranger, first);
      strcat(nameArranger, " ");
      strcat(nameArranger, middle);

      // display formatted name
      std::cout << "\nC-String formatting: " << nameArranger << "\n\n";


      // part 2
      std::cout << "Part A.2:\n";

      // define strings to hold first, middle, and last names
      std::string fname, mname, lname;

      // read in first name
      std::cout << "Enter your first name: ";
      getline(std::cin, fname);

      // read in middle name
      std::cout << "Enter your middle name: ";
      getline(std::cin, mname);

      // read in last name
      std::cout << "Enter your last name: ";
      getline(std::cin, lname);

      // define string to hold formatted name
      std::string fullName;

      // format name in cpp-string style
      fullName.insert(0, lname);
      fullName.append(", ");
      fullName.append(fname);
      fullName.append(" ");
      fullName.append(mname);

      // display formatted name
      std::cout << "\nCPP-String formatting: " << fullName << "\n\n";

      return 0;
}
