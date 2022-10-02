/* ---------------------------
File: ejercicio5.cpp
Author: Javier Izquierdo
Date: 29/09/22
Goal: program that asks for an integer that is the radious of a circle
and print the diameter, area and perimeter of the circle
---------------------------- */

#include <iostream>

using namespace std;

int main() { // function main begins program execution
  // Declare variables
  int rad;
  double PI = 3.14159;
  
  cout << "Introduce the radius (must be an integer): "; // show message
  cin >> rad;

  // Calculate the diameter and print the result in the terminal
  cout << "The diameter is " << rad * 2 << endl;

  // Calculate the perimeter and print the result in the terminal
  cout << "The perimeter is " << rad * 2 * PI << endl;

  // Calculate the area and print the result in the terminal
  cout << "The area is " << PI * rad * rad << endl;

  // End of program
  return 0;
}