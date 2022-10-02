/* ---------------------------
File: ejercicio6b.cpp
Author: Javier Izquierdo
Date: 29/09/22
Goal: program that prints out this pattern
* * * * * * * *
 * * * * * * * *
---------------------------- */

#include <iostream>

using namespace std;

int main() { // function main begins program execution
  // Declare and initialize variables
  string pattern1 = "* * * * * * * *\n";
  string pattern2 = " * * * * * * * *\n";
  
  for(int lines = 0; lines < 8; lines+=2)
    cout << pattern1 << pattern2; 

  // End of program
  return 0;
}