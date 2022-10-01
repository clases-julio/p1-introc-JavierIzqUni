/* ---------------------------
File: ejercicio8c.cpp
Author: Javier Izquierdo
Date: 1/10/22
Goal: program that asks for a positive integer that will be used to determine
the precission of the constant e^x.
---------------------------- */

#include <iostream>
#include<cmath> // Used for calculate x^2 or x^3 ...

using namespace std;

double factorial(int number) { // function that calculates the factorial of a number
  double fact;
  // n! = 1 if n is 0 or 1. If n is 1 i in the loop below
  if (number == 0)
    fact = 1;
  else 
    fact = number;

  // n! = n(n-1)(n-2)... Factorial equation

  while (number > 1) {
    number --;
    fact *= number;
  }
  return fact;
}

int main() { // function main begins program execution
  // Declare variables
  double x ;
  int precission;

  // Declare and initialize e, that will at least be one
  double e = 1; // Mathematical constant e calculated
  
  cout << "Calculate e to the power of: "; // show message
  cin >> x;

  cout << "Introduce a positive integer to determine the precission of e^" << x << ": ";
  cin >> precission;

  // e = 1 + x/1! + x^2/2! + x^3/3! + ...
  while (precission > 0){
    e += pow(x,precission) / factorial(precission); // Used 1.0 to make the division result be a double
    precission --;
  }

  // Print end line
  cout << e << endl;

  // End of program
  return 0;
}