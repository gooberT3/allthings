#include <iostream>
#include <vector>

int main() {
      std::vector<int> scores = {3, 5, 6, 7, 10, 12, 15, 19};

      scores.push_back(25);
      std::cout << "The elements of the vector after appending 25: \n";
      for(auto i: scores) {
            std::cout << i << " ";
      }

      scores.erase(scores.begin());
      std::cout << "\n\nThe vector after removing 3 from the front: \n";
      for(auto i: scores) {
            std::cout << i << " ";
      }

      std::cout << "\n\nThe size of the vector is: " << scores.size();

      std::cout << "\n\nThe odd elements of the vector are: \n";
      for(int i = 0; i < scores.size(); i++) {
            if(scores.at(i)%2) {
                  std::cout << scores.at(i) << " ";
            }
      }

      return 0;
}
