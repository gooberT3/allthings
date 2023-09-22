
//**********************************************
// COSC 1436
// 9 / 22 / 2023
// Mamta Yadav
// 
// This program has a user enter a list of integers to create a vector using a flag
// number of 0 to end the list. It then displays the vector back to the user in 
// reverse order and shows the largest and smallest elements entered.
//**********************************************

// preprocessor directives
#include <iostream>
#include <vector>

// function main
int main() {
      // declare vector
      std::vector<int> userVec;

      // read in list of integers to store in 'userVec'
      int userInt = 0;
      std::cout << "Enter the list of integers, enter a 0 to end: ";
      do{
            std::cin >> userInt; 
            if(userInt != 0) {
                  userVec.push_back(userInt);
            }
      }while(userInt != 0);

      std::cout << std::endl;

      // Display the size of the vector
      std::cout << "The size of the vector is: " << userVec.size() << "\n\n";

      // Display the vector in reverse order
      std::cout << "Here is the vector in reverse order: ";
      for(int i = userVec.size() - 1; i >= 0; i--) {
            std::cout << userVec.at(i) << " ";
      }

      std::cout << std::endl << std::endl;

      // store the largest integer
      int largest = INT_MIN;
      for(auto i: userVec) {
            if(i > largest)  {
                  largest = i;
            }
      }

      // Display the largest element entered
      std::cout << "The largest element within the vector: " << largest << "\n\n";

      // store the smallest integer
      int smallest = INT_MAX;
      for(auto i: userVec) {
            if(i < smallest)  {
                  smallest = i;
            }
      }

      // Display the smallest element entered
      std::cout << "The smallest element within the vector: " << smallest << "\n\n";

      return 0 ;
}
