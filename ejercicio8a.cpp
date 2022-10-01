/* ---------------------------
File: ejercicio8a.cpp
Author: Javier Izquierdo
Date: 1/10/22
Goal: program that asks for a positive integer and calculate
and print its factorial using while loops.
---------------------------- */

#include <iostream>

using namespace std;

int main() { // function main begins program execution
  // Declare variables
  int num;
  int factorial;
  
  cout << "Introduce a positive integer: "; // show message
  cin >> num;

  /* n! = 1 if n is 0 or 1. If n is 1, it won't enter 
  the loop below, being the end result 1 */
  if (num == 0)
    factorial = 1;
  else 
    factorial = num;

  // n! = n(n-1)(n-2)... Factorial equation

  while (num > 1) {
    num --;
    factorial *= num;
  }

  // Print end line
  cout << factorial << endl;

  // End of program
  return 0;
}