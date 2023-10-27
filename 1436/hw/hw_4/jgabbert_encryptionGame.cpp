//******************************************************************** 
//Name: Jacob Gabbert
//Class: COSC 1436 Fall 2023
//Instructor: Dr. Mamta Yadav 
//Assignment 4
//Date: 10/24/23
//Program description: This program takes a user inputted string, seperates each word
//into tokens and encrypts these tokens, it then displays the encrypted string to
//the user.
//********************************************************************

#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//global constant
const int NUM_OF_TOKENS = 20;

//Function prototype
int tokenize(string, string[]);
//TODO: function prototypes for other functions
void vowel(string[], int);
void consonant(string[], int);
void shortTokens(string[], int);

int main ()
{

	// TODO: prompt the user to input a string
      string input;
      string strArray[NUM_OF_TOKENS];
      cout << "Enter a sentence to encrypt: ";
      getline(cin, input);
	// TODO: call the tokenize function
      int tokens = tokenize(input, strArray);	
      cout << "\nThe text you entered has " << tokens << " tokens.\n\n";
	// TODO: display the tokens
      cout << "The unencrypted tokens in your text are: \n";
      for(int i = 0; i < tokens; i++ ) {
            cout << strArray[i] << "\n";
      }	
      cout << "\n";
	// TODO: call a function to encrypt stings that starts with a vowel
      vowel(strArray, tokens); 
	// TODO: call a function to encrypt stings that starts with a consonant
      consonant(strArray, tokens);
	// TODO: call a function to encrypt short strings
      shortTokens(strArray, tokens);    
	// TODO: display the encrypted strings (the results)
      cout << "The encrypted tokens are: \n";
      for(int i = 0; i < tokens; i++ ) {
            cout << strArray[i] << "\n";
      }	
      cout << "\n";

      cout << "The encrypted string is: \n\n";
      for(int i = 0; i < tokens; i++) {
            cout << strArray[i];
      }
      
    return 0; 
}

/*
	definition of function tokenize.
	tokenize accepts a string and a string array as its arguments.
	tokenize first removes the punctuations from the string, except for the hyphen character.
	tokenize then parses the string into tokens and stores them into the strArray.
*/

int tokenize(string myString, string strArray[NUM_OF_TOKENS]){

      istringstream iss(myString);
      string token;
      int i = 0;
      while (getline(iss, token, ' '))
      {
            for(int j = 0; j < token.size(); j++) {
                  if(ispunct(token.at(j))) {
                        if(token.at(j) != '-') {
                              token.erase(j, 1);
                        }
                  }
            }
            strArray[i] = token;
            i++;
      }

      return i;
}

//*************************************************
// vowel function
// Encrypts any tokens that start with a vowel
//
// Return Value
// ------------
// void
//
// Parameters
// ------------
// string strArray[], int tokens
//*************************************************

void vowel(string strArray[], int tokens) {
      for(int i = 0; i < tokens; i++) {
            if((tolower(strArray[i].at(0)) == 'a' || tolower(strArray[i].at(0)) == 'e' || tolower(strArray[i].at(0)) == 'i' || tolower(strArray[i].at(0)) == 'o' || tolower(strArray[i].at(0)) == 'u') && strArray[i].size() > 3)  {                  
                  string sub = strArray[i].substr(0, 3);
                  strArray[i].erase(0, 3);
                  strArray[i].append(sub);
                  strArray[i].append("$");
            }
      }
}

//*************************************************
// consonant function
// Encrypts any tokens that start with a consonant 
//
// Return Value
// ------------
// void
//
// Parameters
// ------------
// string strArray[], int tokens
//*************************************************

void consonant(string strArray[], int tokens) {
      for(int i = 0; i < tokens; i++) {
            if((tolower(strArray[i].at(0)) != 'a' || tolower(strArray[i].at(0)) != 'e' || tolower(strArray[i].at(0)) != 'i' || tolower(strArray[i].at(0)) != 'o' || tolower(strArray[i].at(0)) != 'u') && strArray[i].size() > 3 && strArray[i].back() != '$')  {
                  string sub = strArray[i].substr(strArray[i].size() - 3, 3);
                  strArray[i].erase(strArray[i].size() - 3, 3);
                  strArray[i].insert(0, sub);
                  strArray[i].insert(0, "#");
            }
      }
}

//*************************************************
// shortTokens function
// Encrypts any tokens that are shorter than 4 characters
//
// Return Value
// ------------
// void
//
// Parameters
// ------------
// string strArray[], int tokens
//*************************************************

void shortTokens(string strArray[], int tokens) {
      for(int i = 0; i < tokens; i++) {
            if(strArray[i].size() <= 3) {
                  reverse(strArray[i].begin(), strArray[i].end());
                  strArray[i].insert(0, "@");
                  strArray[i].append("%");
            }
      }
}
