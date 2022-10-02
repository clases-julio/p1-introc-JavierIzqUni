/* ---------------------------
File: ejercicio4.cpp
Author: Javier Izquierdo
Date: 29/09/22
Goal: program that asks for three numbers and prints the sum,
product, promedy, minimum and maximum of them.
---------------------------- */

#include <iostream>

using namespace std;

int main() { // function main begins program execution
  // Declare variables
  int num1, num2, num3;
  int sum , prom, mult, min, max;
  
  cout << "Introduzca tres enteros distintos: "; // show message
  cin >> num1 >> num2 >> num3;

  // Sum and print the result in the terminal
  sum = num1 + num2 + num3;
  cout << "La suma es " << sum << endl;

  // Do the average and print the result in the terminal
  prom = ( num1 + num2 + num3) / 3;
  cout << "El promedio es " << prom << endl;

  // Multiply and print the result in the terminal
  mult = num1 * num2 * num3;
  cout << "El producto es " << mult << endl;
  
  // Check the minimum and maximum values

  if (num1 > num2 ){  // Check number1 and number2 and set minimum and maximum
    max = num1;
    min = num2;
  } else {
    min = num1;
    max = num2;
  }
  
  // Compare the number3 with the current min and max
  if (max < num3)
    max = num3;

  if (min > num3)
    min = num3;
  // --------------------------------------

  // Print the result
  cout << "El menor es " << min << endl;
  cout << "El mayor es " << max << endl;

  // End of program
  return 0;
}