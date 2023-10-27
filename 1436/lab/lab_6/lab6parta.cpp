
//**********************************************
// COSC 1436
// 10 / 6 / 2023
// Mamta Yadav
// 
// This function uses pointers to display and modify values.
//**********************************************

// preproccesor directives
#include <iostream>

//function main
int main() {
      // declare variables
      int intVal = 0;
      double doubleVal = 0;

      // delcare pointers
      int *intPtr = nullptr;
      double *doublePtr = nullptr;

      // intitialize pointers to proper varaibles
      intPtr = &intVal;
      doublePtr = &doubleVal;

      // read in integer and double value from user
      std::cout << "Enter an integer: ";
      std::cin >> intVal;
      std::cout << "Enter a double: ";
      std::cin >> doubleVal;

      // display without using pointers
      std::cout << "Direct Approach: \n"
                << "\tYou entered the following following values: \n"
                << "\t" << intVal << " " << doubleVal << "\n\n";

      // display with using pointers
      std::cout << "Indirect Approach: \n"
                << "\tYou entered the following values: \n"
                << "\t" << *intPtr << " " << *doublePtr << "\n\n";

      // display values squared without using pointers
      std::cout << "Direct approach with values now doubled: \n"
                << "\tYour values are now: \n"
                << "\t" << intVal * 2 << " " << doubleVal * 2 << "\n\n";

      // display values squared with using pointers
      std::cout << "Indirect approach with the values now doubled: \n"
                << "\tYour values are now: \n"
                << "\t" << *intPtr * 2 << " " << *doublePtr * 2 << "\n\n";

      return 0;
}
