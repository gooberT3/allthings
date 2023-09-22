
//**********************************************
// COSC 1436
// 9 / 22 / 2023
// Mamta Yadav
//
// This program creates a 2D array and displays it to the user in a grid like
// fashion, it then creates a 1D array using the values of the downsloping diagonal
// values within the 2D array.
//**********************************************

// preprocessor directives
#include <iostream>
#include <iomanip>

// declare and initialize 2D vector row and column sizes
const int ROW_SIZE = 6,
      COL_SIZE = 6;

// function main
int main() {
      // declare 2D array
      int array_2d[ROW_SIZE][COL_SIZE];
      // delcare 1D array
      int array_1d[6];

      // fill 2D array
      for(int col = 0; col < COL_SIZE; col++) {
            for(int row = 0; row < ROW_SIZE; row++) {
                  array_2d[col][row] = col + row + 2;
                  if(row == col) {
                        array_1d[col] = array_2d[col][row];
                  }
            }
      }

      // Display 2D array to user
      std::cout << "Values in the 2D Array: \n";
      for(int col = 0; col < COL_SIZE; col++) {
            for(int row = 0; row < ROW_SIZE; row++) {
                  std::cout << std::left << std::setw(3) << array_2d[col][row] << " ";
            }
            std::cout << std::endl;
      }
      
      std::cout << std::endl;

      // Display 1D array to user
      std::cout << "Values for the 1D Array: \n";
      for(int i = 0; i < 6; i++) {
            std::cout << array_1d[i] << " ";
      }

      return 0;
}
