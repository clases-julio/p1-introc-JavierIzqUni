/* ---------------------------
File: ejercicio1.cpp
Author: Javier Izquierdo
Date: 28/09/22
Goal: program that asks for two numbers and prints the sum,
substract, multiplication and division of them.
---------------------------- */

#include <iostream>

using namespace std;

int main() { // function main begins program execution
  double num1, num2;
  double sum , dif, mult, div;
  cout << "Introduce two numbers\n"; // show message
  cout << "Introduce one: ";
  cin >> num1;
  cout << "Introduce the other number: ";
  cin >> num2;

  // Sum and print the result in the terminal
  sum = num1 +num2;
  cout << "\nThe result of " << num1 << " plus " << num2 << " is: " << sum << endl;

  // Multiply and print the result in the terminal
  mult = num1 * num2;
  cout << "The result of " << num1 << " multiply by " << num2 << " is: " << mult << endl;
  
  // Substract and print the result in the terminal
  dif = num1 - num2;
  cout << "The result of " << num1 << " minus " << num2 << " is: " << dif << endl;

  // Divide and print the result in the terminal.
  div = num1 / num2;
  cout << "The result of " << num1 << " divided by" << num2 << " is: " << div << endl;

  // End of program
  return 0;
}