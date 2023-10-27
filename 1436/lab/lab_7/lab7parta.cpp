//**********************************************
// COSC 1436
// 10 / 13 / 2023
// Mamta Yadav
//
// This program manipulates a c-style string created by the user.
//**********************************************

// preprocessor directives
#include <iostream>

// fucntion prototypes
void display(char []);
void toggle(char [], int);
void capitalize(char []);

// function main
int main() {
      // delcare c-string for part a
      char a1_input[50];
      // read in string from user
      std::cout << "Enter a string no more than 49 characters: ";
      std::cin.get(a1_input, 49);
      a1_input[49] = '\0';

      // read in the index to toggle case from user
      int casingIndex = 0;
      std::cout << "Enter an index to change the casing of the letter (0-" << strlen(a1_input) << "):";
      std::cin >> casingIndex;

      // toggle the intended index's casing and display string back to user
      toggle(a1_input, casingIndex);
      display(a1_input);

      // clear buffer
      std::cin.ignore(50, '\n');
      std::cout << "\n\n";

      // delcare c-string for part b
      char a2_input[50];
      // read in string from user
      std::cout << "Enter a string no more than 49 characters: ";
      std::cin.get(a2_input, 49);
      a2_input[49] = '\0';

      // capitalize the 3rd and 4th indexs and display string back to user
      capitalize(a2_input);
      display(a2_input);

      return 0;
}

//*************************************************
// display function
// displays c-string array
//
// Return Value
// ------------
// void
//
// Parameters
// ------------
// char input[]
//*************************************************
void display(char input[]) {
      for(int i = 0; i < strlen(input); i++) {
            std::cout << input[i];
      }
}

//*************************************************
// toggle function
// Toggles the case of one character in the c-string determined by the user
//
// Return Value
// ------------
// void
//
// Parameters
// ------------
// char input[], int element
//*************************************************
void toggle(char input[], int element) {
      element -= 1;
      if(isalpha(input[element])) {
            if(islower(input[element])) {
                  input[element] = toupper(input[element]);
            }
            else {
                  input[element] = tolower(input[element]);
            }
            std::cout << "Toggled string...\n";
            return;
      }
      std::cout << "Incomptaible index to toggle...\n";
}

//*************************************************
// capitalize function
// captilizes the 3rd and 4th indexes of the c-string
//
// Return Value
// ------------
// void
//
// Parameters
// ------------
// char input[]
//*************************************************
void capitalize(char input[]) {
      if(strlen(input) > 4) {
            input[2] = toupper(input[2]);
            input[3] = toupper(input[3]);
            std::cout << "Capitalized 3rd and 4th indexes...\n";
            return;
      }
      std::cout << "String incomptaible with function...\n";
}
