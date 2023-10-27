
//**********************************************
// COSC 1436
// 10 / 6 / 2023
// Mamta Yadav
//
// This program reads in 5 integers into two arrays and then uses pointer notation
// and array pointer notation to display and square the values.
//**********************************************

// preproccesor directives
#include <iostream>

//function prototypes
void displayValues(int [], const int);
void squareValues(int [], const int);

// function main
int main() {
      // declare and intitialize array sizes
      const int SIZE = 5;

      // define array for B.1
      int userArray[SIZE];

      // read in values for B.1
      std::cout << "Enter 5 integers: ";
      for(int i = 0; i < SIZE; i++) {
            std::cin >> userArray[i];
      }
      
      // display values using pointer notation for B.1
      std::cout << "Array using pointer notation: \n";
      displayValues(userArray, SIZE);

      // square values for B.1
      squareValues(userArray, SIZE);

      // display squared values for B.1
      std::cout << "\nSquared values using pointer notation: \n";
      displayValues(userArray, SIZE);

      // define array and pointer for B.2
      int arrayDos[SIZE];
      int *dosPtr = arrayDos;

      // read in values for B.2
      std::cout << "\n\nEnter 5 integers for part B: ";
      for(int i = 0; i < SIZE; i++) {
            std::cin >> arrayDos[i];
      }

      // display values using array pointer for B.2
      std::cout << "Array using array pointer: \n";
      for(int i = 0; i < SIZE; i++) {
            std::cout << dosPtr[i] << " ";
      }

      // square values using pointer notation for B.2
      for(int i = 0; i < SIZE; i++) {
            dosPtr[i] *= dosPtr[i];
      }

      // display squared values using pointer notation for B.2
      std::cout << "\nSquared valuse using array pointer: \n";
      for(int i = 0; i < SIZE; i++) {
            std::cout << dosPtr[i] << " ";
      }

      return 0;
}

//*************************************************
// displayValues function
// displays the contents of an array using
// pointer notation
//
// Return Value
// ------------
// void
//
// Parameters
// ------------
// int userArray[], const int SIZE
//*************************************************
void displayValues(int userArray[], const int SIZE) {
      int *arrayPtr = userArray;

      for(int i = 0; i < SIZE; i++) {
            std::cout << *(arrayPtr + i) << " ";
      }
}

//*************************************************
// squareValues function
// squares each element of an array using pointer notation
//
// Return Value
// ------------
// void
//
// Parameters
// ------------
// int userArray[], const int SIZE
//*************************************************
void squareValues(int userArray[], const int SIZE) {
      int *arrayPtr = userArray;

      for(int i = 0; i < SIZE; i++) {
            *(arrayPtr + i) *= *(arrayPtr + i);
      }
}
