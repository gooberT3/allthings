
//**********************************************
// COSC 1436
// 9 / 29 / 2023
// Mamta Yadav
//
// This program sorts two identical arrays using the bubble and selection sorting methods
// and then displays each sorted array along with the amount of exchanges were performed
// by both.
//**********************************************

// preproccesor directives
#include <iostream>

// function prototypes
int bubbleSort(int []);
int selectionSort(int []);

// array size
const int SIZE = 10;

// function main
int main() {
      // declare and initialize arrays
      int array1[SIZE] = {931, 297, 624, 267, 777, 794, 555, 856, 335, 430};
      int array2[SIZE] = {931, 297, 624, 267, 777, 794, 555, 856, 335, 430};

      // sort array1 using bubble sort
      int bubbleCount = bubbleSort(array1);
      // display the array along with the amount of exchanges
      std::cout << "Sorted array after using bubble sort: \n";
      for(auto i: array1) {
            std::cout << i << " ";
      }
      std::cout << "\n\n" << bubbleCount << " exchanges were made by bubble sorting.\n\n\n";

      // sort array2 using selection sort
      int selectionCount = selectionSort(array2);
      // display the array along with the amount of exchanges
      std::cout << "Sorted array after using selection sort: \n";
      for(auto i: array2) {
            std::cout << i << " ";
      }
      std::cout << "\n\n" << selectionCount << " exchanges were made by selection sorting.\n\n\n";

      return 0;
}

//*************************************************
// bubbleSort function
// Sorts an array using bubble sort
//
// Return Value
// ------------
// int count
//
// Parameters
// ------------
// int array[]
//*************************************************
int bubbleSort(int array[]) {
      int count = 0;

      for(int i = 0; i < SIZE - 1; i++) {
            bool swapped = false;
            for(int j  = 0; j < SIZE - i - 1; j++) {
                  if(array[j + 1] < array[j]) {
                        int temp = 0;
                        temp = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = temp;
                        swapped = true;
                        count += 1;
                  }
            }
            if(swapped == false) {
                  break;
            }
      }

      return count;
}

//*************************************************
// selectionSort function
// Sorts an array using selection sort
//
// Return Value
// ------------
// int count
//
// Parameters
// ------------
// int array[]
//*************************************************
int selectionSort(int array[]) {
      int count = 0;

      for(int i = 0; i < SIZE - 1; i++) {
            int min_index = i;
            for(int j = i + 1; j < SIZE; j++) {
                  if(array[j] < array[min_index]) {
                        min_index = j;
                  }
            }
            if(min_index != i) {
                  int temp = array[min_index];
                  array[min_index] = array[i];
                  array[i] = temp; 
                  count += 1;
            }
      }

      return count;
}
