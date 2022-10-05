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
  char pattern1 = '*';
  char pattern2 = ' ';
  int rowSize = 8;
  int columnSize = 16;

  for (int rows = 0; rows < rowSize; rows++) {

    for (int columns = 0; columns < columnSize; columns++) {
      if ( ( rows + columns ) % 2 == 0)
        cout << "*";
      else
        cout << " ";
    }

    cout << "\n";
  }

  // End of program
  return 0;
}