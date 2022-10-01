/* ---------------------------
File: ejercicio8b.cpp
Author: Javier Izquierdo
Date: 1/10/22
Goal: program that asks for a positive integer that will be used to determine
the precission of the constant e.
---------------------------- */

#include <iostream>

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
  int precission;

  // Declare and initialize e, that will at least be one
  double e = 1; // Mathematical constant e calculated
  
  cout << "Introduce a positive integer to determine the precission of e: "; // show message
  cin >> precission;

  // e = 1 + 1/1! + 1/2! + 1/3! + ...
  while (precission > 0){
    e += 1.0 / factorial(precission); // Used 1.0 to make the division result be a double
    precission --;
  }

  // Print end line
  cout << e << endl;

  // End of program
  return 0;
}