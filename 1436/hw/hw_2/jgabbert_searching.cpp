#include <iostream>

int search(int, int [], const int);
void bubbleSort(int [], const int);

int main() {
      int userNum = 10;

      std::cout << "Enter an integer between 0 - 150 to search for: ";
      std::cout << std::endl;

      int array_1d[] = {101, 125, 32, 73, 7, 10, 54, 68, 150, 43,
                        111, 25, 107, 19, 27, 133, 13, 88, 97, 5,
                        65, 2, 117, 30, 61, 99, 109, 146, 77, 81};

      const int SIZE = sizeof(array_1d);

      int linearComparisonCount = search(userNum, array_1d, SIZE);

      std::cout << "The amount of comparisons used during linear search was: " << linearComparisonCount << "\n\n";

      bubbleSort(array_1d, SIZE);

      for(int i = 0; i < SIZE; i++ ) {
            std::cout << array_1d[i] << " ";
      }

      return 0;
}

int search(int userNum, int array_1d[], const int SIZE) {
      int comparisonCount = 0;

      for(; comparisonCount < SIZE; comparisonCount++) {
            if(array_1d[comparisonCount] == userNum) {
                  std::cout << "Value '" << userNum << "' located at index [" << comparisonCount << "]\n\n";
                  break;
            }
      }

      return comparisonCount + 1;
}

void bubbleSort(int array_1d[], const int SIZE) {
      for(int i = 0; i < SIZE - 1; i++) {
            for(int j = 0; j < SIZE - 1; j++) {
                  if(array_1d[j] > array_1d[j + 1]) {
                        int temp = 0;
                        temp = array_1d[j];
                        array_1d[j] = array_1d[j + 1];
                        array_1d[j + 1] = temp;
                  }
            }
      }
}
