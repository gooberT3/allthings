//COSC 1436 Introduction to Problem Solving with Computers
//Fall 2023
//Lab 5
//Introduction to Pointers


#include <iostream>
using namespace std;

int main()
{

      double length;	// holds length 
      double width;	// holds width 
      double area;	// holds area

      double *lengthPtr = nullptr;	// int pointer which will be set to point to length 
      double *widthPtr = nullptr;	// int pointer which will be set to point to width

      cout << "Please input the length of the rectangle" << endl;
      cin >> length;

      cout << "Please input the width of the rectangle" << endl;
      cin >> width;

      // Fill in code to make lengthPtr point to length (hold its address)
      lengthPtr = &length;


      // Fill in code to make widthPtr point to width (hold its address)
      widthPtr = &width;


      area = *lengthPtr * *widthPtr;	// Fill in code to find the area by using only the pointer variables

            cout << "The area is " << area << endl;

      if (*lengthPtr > *widthPtr)
            cout << "The length is greater than the width" << endl;

      else if (*widthPtr > *lengthPtr)
            cout << "The width is greater than the length" << endl;

      else
            cout << "The width and length are the same" << endl;

      return 0;
}

