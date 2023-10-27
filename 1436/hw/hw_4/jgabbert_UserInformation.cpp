//********************************************************************
//Name: Jacob Gabbert
//Class: COSC 1436 Fall 2023
//Instructor: Dr. Mamta Yadav
//Assignment 4
//Date: 10/24/23
//Program description: this program reads two strings which are then converted to c-strings
//and manipulated to display certain aspects of the name, it then combines both c-strings 
//and displays all the data as one c-string
//*******************************************************************



// preprocessor directives
#include <iostream>
#include <string>
#include <cstring>

// function prototypes
void findLength(char []);
void findFirstName(char [], const int);
void checkForA(char [], const int);
void combine(char [], char []);
void updateCityState(char []);

// function main
int main() {
      // define temp variables to hold initial input
      std::string tempName = "",
                  tempCityState= "";

      // read in temp inputs
      std::cout << "Enter your full name: ";
      getline(std::cin, tempName);
      std::cout << "Enter your city and state seperated by a comma: ";
      getline(std::cin, tempCityState);

      // define c-string lengths;
      const int NAME_LENGTH = tempName.length() + 1,
                CITY_STATE_LENGTH= tempCityState.length() + 1;

      // define c-strings
      char name[NAME_LENGTH],
           cityState[CITY_STATE_LENGTH];

      // copy temp inputs into c-strings
      strcpy(name, tempName.c_str());
      strcpy(cityState, tempCityState.c_str());

      // create null characters at end of c-strings
      name[NAME_LENGTH - 1] = '\0';
      cityState[CITY_STATE_LENGTH - 1] = '\0';

      // call findLength function
      findLength(name);

      // call findFirstName function
      findFirstName(name, NAME_LENGTH);

      // call checkForA function
      checkForA(name, NAME_LENGTH);

      // call combine function
      combine(name, cityState);
      
      // update city and state
      strcpy(cityState, "Dallas, TX");
      std::cout << "Updated city and state: " << cityState << "\n";

      return 0;
}

//*************************************************
// findLength function
// finds the length of the name input from the user
//
// Return Value
// ------------
// void
//
// Parameters
// ------------
// char name[]
//*************************************************

void findLength(char name[]) {
      std::cout << "The length of your name is: " << strlen(name) << "\n";
}

//*************************************************
// findFirstName function
// seperates and displays the first name from the user's input
//
// Return Value
// ------------
// void
//
// Parameters
// ------------
// char name[], const int NAME_LENGTH
//*************************************************

void findFirstName(char name[], const int NAME_LENGTH) {
      std::string temp;

      for(int i = 0; i < NAME_LENGTH; i++) {
            if(!(isspace(name[i]))) {
                  temp += name[i];
            }
            else {
                  break;
            }
      }

      std::cout << "First Name is: " << temp << "\n";
}

//*************************************************
// checkForA function
// checks if the user's name input contains an 'a'
//
// Return Value
// ------------
// void
//
// Parameters
// ------------
// char name[], const int NAME_LENGTH
//*************************************************

void checkForA(char name[], const int NAME_LENGTH) {
      int lowerCount = 0,
          upperCount = 0;
      bool hasLower = false,
           hasUpper = false;

      for(int i = 0; i < NAME_LENGTH; i++) {
            if(name[i] == 'a') {
                  lowerCount += 1;
                  hasLower = true;
            }else if(name[i] == 'A') {
                  upperCount += 1;
                  hasUpper = true;
            }
      }
      if(hasLower) {
            std::cout << "Your name has '" << lowerCount << "' a's.\n";
      }
      if(hasUpper) {
            std::cout << "Your name has '" << upperCount << "' A's.\n";
      }
}

//*************************************************
// combine function
// combine name and cityState c-strings
//
// Return Value
// ------------
// void
//
// Parameters
// ------------
// char name[], char cityState[]
//*************************************************

void combine(char name[], char cityState[]) {
      std::string temp = "Hello ";
      temp += name;
      temp += " from ";
      temp += cityState;
      temp += ".";

      std::cout << temp << "\n";
}
