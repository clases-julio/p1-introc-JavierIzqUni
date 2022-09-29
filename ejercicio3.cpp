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
  // Declare variables
  int num1, num2;
  
  cout << "Introduce two numbers\n"; // show message
  cout << "Introduce one: ";
  cin >> num1;
  cout << "Introduce the other number: ";
  cin >> num2;

  // Compare the two numbers 
  if (num1 > num2)
  {
    cout << num1 << " es más grande" << endl;
  } else  if (num1 < num2)
  {
    cout << num2 << " es más grande" << endl;
  } else {
    cout << "Estos números son iguales\n";
  }

  // End of program
  return 0;
}