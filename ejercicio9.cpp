/* ---------------------------
File: ejercicio9.cpp
Author: Javier Izquierdo
Date: 1/10/22
Goal: program that calculates the value of PI using an infinite series.
Then prints the value each 1000 iterations
---------------------------- */

#include <iostream>
#include <iomanip> // To print the table

using namespace std;

int main() { // function main begins program execution
  // Declare the mathematical constant pi calculated
  double pi; 

  // Table Header
  cout 
  << left << setw(15) << "Iterations" 
  << left << setw(15) << "Approximation" 
  << endl;


  // π = 4 − 4/3 + 4/5 − 4/7 + 4/9 − 4/11 + ...

  for (int iterations = 0; iterations < 1000; iterations++)
  {
    if (iterations % 2 == 1)
      pi -= 4.0 / (iterations * 2 + 1);
    else
      pi += 4.0 / (iterations * 2 + 1);
    
    // Add 1 to the iterations to have the number of terms of the series
    cout << left << setw(15) << iterations + 1 << left << setw(15) << pi << endl;
  }

  // End of program
  return 0;
}