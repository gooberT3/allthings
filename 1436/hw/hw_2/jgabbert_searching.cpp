
#include <iostream>

int linearSearch(const int, int [], int);
int binarySearch(const int, int[], int);
void bubbleSort(const int, int []);

int main() {
      const int SIZE = 30;
      int array_1d[] = {101, 125, 32, 73, 7, 10, 54, 69, 150, 43,
                        111, 25, 107, 19, 27, 133, 13, 88, 97, 5,
                        65, 2, 117, 30, 61, 99, 109, 146, 77, 81};
      int key = 0;
      std::cout << "Enter your key value to search for: ";
      std::cin >> key;
      std::cout << std::endl;

      int linearCount = linearSearch(SIZE, array_1d, key);

      bubbleSort(SIZE, array_1d);

      int binaryCount = binarySearch(SIZE, array_1d, key); 

      std::cout << "The number of comparisons performed using the linear search method was: " << linearCount << "\n\n";
      std::cout << "The number of comparisons performed using the binary search method was: " << binaryCount << "\n\n";

      return 0;
}

int linearSearch(const int SIZE, int array_1d[], int key) {
      int comparisonCount = 0;

      for(int index = 0; index < SIZE; index++) {
            comparisonCount++;
            if(array_1d[index] == key) {
                  std::cout << "Key value found at index [" << index << "]\n\n";
                  break;
            }
            if(comparisonCount == 30) {
                  std::cout << "Key value not within list.\n\n";
                  break;
            }
      }

      return comparisonCount;
}

int binarySearch(const int SIZE, int array_1d[], int key) {
     int binaryCount = 0,
         right = SIZE - 1,
         left = 0;

     while(left <= right) {
           binaryCount++;
           int middle = left + (right - left) / 2;

           if(array_1d[middle] == key) {
                 break;
           }else if(array_1d[middle] < key) {
                 left = middle + 1;
           }else {
                 right = middle - 1;
           }

           if(binaryCount == 30) {
                 std::cout << "Key value not within list.\n\n";
                 break;
           }
     }

     return binaryCount;
}

void bubbleSort(const int SIZE, int array_1d[]) {
      for(int i = 0; i < SIZE - 1; i++) {
            bool swapped = false;
            for(int j  = 0; j < SIZE - i - 1; j++) {
                  if(array_1d[j + 1] < array_1d[j]) {
                        int temp = 0;
                        temp = array_1d[j];
                        array_1d[j] = array_1d[j + 1];
                        array_1d[j + 1] = temp;
                        swapped = true;
                  }
            }
            if(swapped == false) {
                  break;
            }
      }
}
