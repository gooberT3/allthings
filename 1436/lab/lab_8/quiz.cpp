//COSC 1436 Introduction to Problem Solving with Computers
//Fall 2023
//Programming Quiz 4
//Introduction to Pointers

#include <iostream>
using namespace std;

//global variable. NOTE: Must have to use the global variable PI where ever required to use 3.14
const double PI = 3.14; 


//TODO 1: Function prototype for circleArea and displayArea function (4 Points). Refer to the function definitions description given below in TODO 7 and TODO 8.
double circleArea(double);
void displayArea(double, double);

int main()
{
        double radius;

        //TODO 2: Declare a variable to hold area of the circle (1 Point)
      double area;    

        //TODO 3:  Declare a double pointer radiusPtr which will be set to point to the radius of the circle (2 Points)
      double *radiusPtr = NULL;       

        cout << "Please input the radius of the circle: ";
	      cin >> radius;
     
        //TODO 4: Write code to make radiusPtr point to radius of the circle (3 points)
      radiusPtr = &radius; 

        //TODO 5: Call circleArea function (2 point)
      area = circleArea(radius); 

        //TODO 6: Call displayArea function (2 point)
      displayArea(radius, area); 

        return 0;
}

/* TODO 7:
	definition of function circleArea.
	circleArea accepts radius as its argument and calculates the area of the circle.
  circleArea function returns the area of the circle 
  (5 Points) 
*/
double circleArea(double radius) {
      return PI*(radius*radius);
}




/* TODO 8:
	definition of function displayArea.
	displayArea accepts the radius and area as its arguments and display the following:
  - display the area of the circle
  - display following message
    If area is large than 100.0, display "The circle area is greater than 100.0."
    If area is small than 100.0, display "The circle area is smaller than 100.0."
    If area is equal to 100.0, display "The circle area is equal to 100.0"
  (6 points)
*/
void displayArea(double radius, double area) {
      std::cout << "The area is: " << area << "\n\n";
      if(area > 100.0) {
            std::cout << "The circle area is greater than 100.0.\n";
      }else if(area < 100.0) {
            std::cout << "The circle area is smaller than 100.0.\n";
      }else {
            std::cout << "The circle area is equal to 100.0.\n";
      }
}
