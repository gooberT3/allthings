//**********************************************
// COSC 1436
// 10 / 13 / 2023
// Mamta Yadav
// 
// This function uses a pointer pointing to an array to manipulate an array
// created by the user.
//**********************************************

// preprocessor directives
#include <iostream>

// function prototypes
void menu(int *, int);
float getAverage(int *, int);
float getLargest(int *, int);

// function main
int main() {
      // declare size variable 
      int size = 0;
      // read in the size of the array
      do {
            std::cout << "Enter the number of values to be processed: ";
            std::cin >> size;
            if(size <= 0) {
                  std::cout << "Invalid amount!\n\n";
            }
      }while(size <= 0);

      // declaer and initialize pointer to array
      int *ptrArray = new int[size];
      
      // read in the values for the 
      std::cout << "Enter the values you wish to process: ";
      for(int i = 0; i < size; i++) {
            std::cin >> ptrArray[i];
      }

      // display menu to user
      menu(ptrArray, size);

      return 0;
}

//*************************************************
// menu function
// displays a menu for a user to perform processes
//
// Return Value
// ------------
// void
//
// Parameters
// ------------
// int *ptrArray, int size
//*************************************************
void menu(int *ptrArray, int size) {
      char choice;
      // loop menu on function return
      do {
            // loop menu for input validation
            do {
                  std::cout << "Enter choice:\n"
                        << "1. Average\n"
                        << "2. Largest\n"
                        << "3. Quit\n";
                  std::cin >> choice; 
                  if(choice != '1' && choice != '2' && choice != '3') {
                        std::cout << "Invalid choice!\n\n";
                  }
            }while(choice != '1' && choice != '2' && choice != '3');

            // run function determined on which function user chose
            switch(choice) {
                  case '1':
                        {
                              float average = getAverage(ptrArray, size);
                              std::cout << "The average is: " << average << "\n\n";
                              break;
                        }
                  case '2':
                        {
                              float largest = getLargest(ptrArray, size);
                              std::cout << "The largest number is: " << largest << "\n\n";
                              break;
                        }
                  case '3':
                        return;
            }
      }while(choice != '3');
}

//*************************************************
// getAverage function
// gets the average of an array
//
// Return Value
// ------------
// float sum / size
//
// Parameters
// ------------
// int *ptrArray, int size
//*************************************************
float getAverage(int *ptrArray, int size) {
      float sum = 0;
      for(int i = 0; i < size; i++) {
            sum += ptrArray[i];
      }
      return sum / size;
}

//*************************************************
// getLargest function
// finds the largest element of an array
//
// Return Value
// ------------
// float largest
//
// Parameters
// ------------
// int *ptrArray, int size
//*************************************************
float getLargest(int *ptrArray, int size) {
      float largest = INT_MIN;
      for(int i = 0; i < size; i++) {
            if(ptrArray[i] > largest) {
                  largest = ptrArray[i];
            }
      }
      
      return largest;
}
