/* ---------------------------
File: ejercicio6b.cpp
Author: Javier Izquierdo
Date: 29/09/22
Goal: program that prints out this patron
* * * * * * * *
 * * * * * * * *
---------------------------- */

#include <iostream>

using namespace std;

int main() { // function main begins program execution
  // Declare and initialize variables
  string patron1 = "* * * * * * * *\n";
  string patron2 = " * * * * * * * *\n";
  
  for(int lines = 0; lines < 8; lines+=2)
    cout << patron1 << patron2; 

  // End of program
  return 0;
}