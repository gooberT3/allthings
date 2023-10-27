#include <iostream>

int findSum(int [], const int);
int findLargest(int [], const int);

int main() {
      const int VALUES_SIZE = 8;

      int values[VALUES_SIZE]; 
      int count = 0;

      std::cout << "Enter 8 integers to store in an array: ";
      for(int i = 0; i < VALUES_SIZE; i++) {
            std::cin >> values[i];
      }

      int sum = findSum(values, VALUES_SIZE);

      int largest = findLargest(values, VALUES_SIZE);

      std::cout << "\nThe sum of all numbers entered in the array was: " << sum << "\n";
      std::cout << "\nThe largest number entered into the array was: " << largest << "\n";

      return 0;
}

int findSum(int values[], const int VALUES_SIZE) {
      int sum = 0;

      for(int i = 0; i < VALUES_SIZE; i++) {
            sum += values[i];
      }

      return sum;
}

int findLargest(int values[], const int VALUES_SIZE) {
      int largest = INT_MIN;

      for(int i = 0; i < VALUES_SIZE; i++) {
            if(values[i] > largest) {
                  largest = values[i];
            }
      }

      return largest;
}
