#include <iostream>

void appendList(int *, int, int);
void appendShiftList(int *, int, int);
void modifyList(int *, int, int, int);
int getFirst(int *);
int getLast(int *, int);
int getMaximum(int *, int);
int getMinimum(int *, int);
void getMode(int *, int);

int main() {
      int size = 0;
      std::cout << "Enter the size for an array: ";
      std::cin >> size;

      int *sizePtr = NULL;
      sizePtr = &size;

      int userArray[size];

      std::cout << "Enter the list of integers to store in the array: ";
      for(auto i: userArray) {
            std::cin >> i;
      }

      int *arrayPtr = NULL;
      arrayPtr = userArray;

      size += 1;
      appendList(arrayPtr, size, 1);
      size += 1;
      appendShiftList(arrayPtr, size, 1);


      std::cout << "WGMPSF";

      int index = 0;
      std::cout << "Enter the index of the value you wish to change: ";
      std::cin >> index;

      int newValue = 0;
      std::cout << "Enter the new value you wish to store: ";
      std::cin >> newValue;

      modifyList(arrayPtr, size, index, newValue);

      int firstValue = getFirst(arrayPtr);
      int lastValue = getLast(arrayPtr, size);
      int max = getMaximum(arrayPtr, size);
      int min = getMinimum(arrayPtr, size);

      for(int i = 0; i < size; i++) {
            std::cout << userArray[i] << " ";
      }

      return 0;
}

void appendList(int *arrayPtr, int size, int num) {
      arrayPtr = new int[size += 1];
      arrayPtr[size - 1] = num;
}

void appendShiftList(int *arrayPtr, int size, int num) {
      arrayPtr = new int[size += 1];
      for(int i = size - 1; i >= 0; i++) {
            arrayPtr[i] = arrayPtr[i - 1];
      }
      arrayPtr[0] = num;
}

void modifyList(int *arrayPtr, int size, int index, int newValue) {
      if(index >= 0 && index <= size - 1) {
            arrayPtr[index] = newValue;
      }
}

int getFirst(int *arrayPtr) {
      return arrayPtr[0];
}

int getLast(int *arrayPtr, int size) {
      return arrayPtr[size - 1];
}

int getMaximum(int *arrayPtr, int size) {
      int maxTemp = INT_MIN;
      for(int i = 0; i < size; i++) {
            if(arrayPtr[i] > maxTemp) {
                  maxTemp = arrayPtr[i];
            }
      }
      return maxTemp;
}

int getMinimum(int *arrayPtr, int size) {
      int minTemp = INT_MIN;
      for(int i = 0; i < size; i++) {
            if(arrayPtr[i] < minTemp) {
                  minTemp = arrayPtr[i];
            }
      }
      return minTemp;
}

void getMode(int *arrayPtr, int size) {
      
}
