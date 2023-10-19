
//**********************************************
// COSC 1436
// 9 / 28 / 2023
// Mamta Yadav
// 
// This program reads in an unknown amount of integers from an external file, creates an array using the
// amount of integers read. It then sorts the array from least to greatest using the 'bubble sort' method.
// It then sorts the array from greatest to least using the 'selection sort' method. It also writes the
// final sorted array to an output file.
//**********************************************

// prproccesor directives
#include <iostream>
#include <fstream>

// function prototypes
int countLines();
void fillArray(const int, int [], int);
void bubbleSort(const int, int[]);
void selectionSort(const int, int[]);

// function main
int main() {
      // read in target value from user
      int key = 0;
      std::cout << "Enter a key value to search for: ";
      std::cin >> key;

      // read in the size of the array by counting how many lines are in the file
      const int LINE_COUNT= countLines(); 

      // declare an array with the size gathered from the 'countLines' function
      int array[LINE_COUNT];

      // fill the array by reading the file again but instead storing the values
      fillArray(LINE_COUNT, array, key);

      // use the 'bubble sort' method to sort the array
      bubbleSort(LINE_COUNT, array);

      // use the 'selection sort' method
      selectionSort(LINE_COUNT, array);
      
      return 0;
}

//*************************************************
// countLines function
// Counts the lines to get a size for the array
//
// Return Value
// ------------
// int lineCount
//
// Parameters
// ------------
// none
//*************************************************
int countLines() {
      // create a file input stream and open the file
      std::ifstream myFile("Values.txt");
      // declare and initialize lineCount to 0
      int lineCount = 0;

      // if the file is open continue
      if(myFile.is_open()) {
            std::string line;

            // while we're not reading an empty line, counts lines
            while(std::getline(myFile, line)) {
                  lineCount++;
            }

            // close the file
            myFile.close();
      }

      // return the line count to main
      return lineCount;
}

//*************************************************
// fillArray function
// Fills the array with the values from the file
//
// Return Value
// ------------
// none
//
// Parameters
// ------------
// const int LINE_COUNT, int array[], int key
//*************************************************
void fillArray(const int LINE_COUNT, int array[], int key) {
      // create an input stream and open the file
      std::ifstream myFile("Values.txt");

      // if the file is open continue
      if(myFile.is_open()) {
            std::string line;
            int count = 0;

            // read in all the values in the file as strings and convert them
            // to integers to store in the array
            while(std::getline(myFile, line)) {
                  array[count++] = stoi(line); 
            }

            // close the file
            myFile.close();
      }
}

//*************************************************
// bubbleSort function
// Sorts the array using 'bubble sort'
//
// Return Value
// ------------
// none
//
// Parameters
// ------------
// const int LINE_COUNT, int array[]
//*************************************************
void bubbleSort(const int LINE_COUNT, int array[]) {
      for(int i = 0; i < LINE_COUNT - 1; i++) {
            bool swapped = false;
            for(int j  = 0; j < LINE_COUNT - i - 1; j++) {
                  if(array[j + 1] < array[j]) {
                        int temp = 0;
                        temp = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = temp;
                        swapped = true;
                  }
            }
            if(swapped == false) {
                  break;
            }
      }

      std::cout << "Sorted using 'Bubble' method: \n";
      for(int i = 0; i < LINE_COUNT; i++) {
            std::cout << array[i] << " ";
      }
      std::cout << std::endl << std::endl;
}

//*************************************************
// selectionSort function
// Sorts the array using 'selection sort'
//
// Return Value
// ------------
// none
//
// Parameters
// ------------
// const int LINE_COUNT, int array[]
//*************************************************
void selectionSort(const int LINE_COUNT, int array[]) {
      int max_index= 0;
      std::ofstream myFile("Output.txt");

      for(int i = 0; i < LINE_COUNT - 1; i++) {
            max_index = i;
            for(int j = i + 1; j < LINE_COUNT; j++) {
                  if(array[j] > array[max_index]) {
                        max_index = j;
                  }
            }
            if(max_index != i) {
                  std::swap(array[max_index], array[i]);
            }
            if(!(myFile.eof())) {
                  myFile << array[i] << "\n";
            }
      }
      myFile.close();

      std::cout << "Sorted using 'Selection' method: \n";
      for(int i = 0; i < LINE_COUNT; i++) {
            std::cout << array[i] << " ";
      }
      std::cout << std::endl << std::endl;
}
