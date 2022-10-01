/* ---------------------------
File: ejercicio7.cpp
Author: Javier Izquierdo
Date: 29/09/22
Goal: program that asks for a 5 digit integer and prints 
its digits separated by spaces
---------------------------- */

#include <iostream>
#include<cmath> // Used for calculate 10^digit

using namespace std;

int main() { // function main begins program execution
  // Declare variables
  int num;
  int split; // Will be use to split the digits
  
  cout << "Introduce a 5 digit integer: "; // show message
  cin >> num;

  // Check if the number is negative, if it is print symbol and convert it to positive
  if (num < 0){
    cout << "-   ";
    num *= -1;
  }

  /* For loop, because the number of digits is always 5, because if you use while and the number of digits
  that are 0 is bigger than 1, the loop is interrupted and the result is not what we want */
  for (int digit = 5; digit > 0; digit--) {

    /* Set split equal to 10^(digit position - 1), this means that in
    order to obtain the digit in the fifth position, we need to divide by 10^4 = 10000 */
    split = pow(10.0, digit -1);
    cout << num / split << "   ";

    /* Then we need to obtain the smaller digits, so we use the modulo, for example:
    to obtain 12 in the number 412 we do 412 % 100 */
    num %= split;
  }

  // Print end line
  cout << endl;

  // End of program
  return 0;
}