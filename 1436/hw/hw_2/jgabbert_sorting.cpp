#include <iostream>
#include <fstream>

int countLines();
void fillArray(const int, int [], int);
void bubbleSort(const int, int[]);
void selectionSort(const int, int[]);

int main() {
      int key = 0;
      std::cout << "Enter a key value to search for: ";
      std::cin >> key;

      const int LINE_COUNT= countLines(); 

      int array[LINE_COUNT];

      fillArray(LINE_COUNT, array, key);

      bubbleSort(LINE_COUNT, array);

      selectionSort(LINE_COUNT, array);
      
      return 0;
}

int countLines() {
      std::ifstream myFile("Values.txt");
      int lineCount = 0;

      if(myFile.is_open()) {
            std::string line;

            while(std::getline(myFile, line)) {
                  lineCount++;
            }

            myFile.close();
      }

      return lineCount;
}

void fillArray(const int LINE_COUNT, int array[], int key) {
      std::ifstream myFile("Values.txt");

      if(myFile.is_open()) {
            std::string line;
            int count = 0;

            while(std::getline(myFile, line)) {
                  array[count++] = stoi(line); 
            }

            myFile.close();
      }
}

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
