/* ---------------------------
File: ejercicio10pro.cpp
Author: Javier Izquierdo
Date: 1/10/22
Goal: program that prints a romboid figure only printing * or 
blank spaces using for loops. Pro version
---------------------------- */

#include <iostream>

using namespace std;

int main() { // function main begins program execution
  // Declare and initialize variables
  string asterisk = "*"; 
  string space = " ";

  // Declare variable to specify the square size, must be an odd number
  int squareSize;
  cout << "Introduce an odd number to be the number of rows of the figure: ";
  cin >> squareSize;

  // Check if the number is odd
  if (squareSize % 2 == 0 ) {
    cout << "Error: You must input an odd number" << endl;
    return 1;
  }

  // If the number is 1, I need to print it separated because it doesn't have vertices
  if (squareSize == 1) {
    cout << asterisk << endl;
    return 0;
  }
  // Is used to determine the vertex position. You need to substract 1 because start at 0.
  int topLeftVertex = (squareSize - 1)/ 2; // Top and left vertex is square - 1 / 2 
  int bottomRightVertex = topLeftVertex + (squareSize - 1); // Bottom and right vertex is top + square -1

  for (int rows = 0; rows < squareSize; rows++){ 
    for (int columns = 0; columns < squareSize; columns++){

      if (rows + columns > bottomRightVertex || rows + columns > topLeftVertex + rows * 2)
        // Exit the loop in order to minimize printing. For more information check Readme
        break;
      
      // Takes care of printing the front part. For more information check Readme
      if ( rows + columns < topLeftVertex || rows + columns > topLeftVertex + columns * 2) 
        cout << space;
      else
        cout << asterisk;
    }
    cout << endl;
  }

  // End of program
  return 0;
}