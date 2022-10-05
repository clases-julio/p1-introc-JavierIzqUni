# P1-IntroCPP

## Observations

### Ejercicio 1

The main problem that I encounter was the inacuracy of the division because it was converting the result to an integer. So in order to solve this issue, and to also permit the user to input any type of number, I declared the variables that later will be used to store the input numbers to be doubles. With this the accuracy of the division is now correct.

### Ejercicio 2

1. Part a.

    A simple program that just prints the number with a spce in between.

    ```cpp
    cout << "1 2 3 4\n";
    ```

2. Part b.

    The same as the previous part, but using four <<.

    ```cpp
    cout << "1 " << "2 " << "3 " << "4\n";
    ```

3. Part c.

    Almost the same as part b, but instead of using one print instruction, I used four.

    ```cpp
    cout << "1 ";
    cout << "2 ";
    cout << "3 ";
    cout << "4\n";
    ```

### Ejercicio 3

I decided to use an if - else if - else structure instead of using an if and if - else because I think it makes sense to have the 3 different outputs in the same statement. 

First, I compared the two numbers to find which one is greater, and then if they enter in the else statement I print that they are equal.

### Ejercicio 4

The main problem that I found in this excercise was to use the least amount of comparisons used. So in order to solve this problem I used the next approach:

1. Compare the first two numbers and assign them to the max and min values.

    ```cpp
    // 1 comparison
    if (num1 > num2 ){
      max = num1;
      min = num2;
    } else {
      min = num1;
      max = num2;
    }
    ```

2. Compare the third value to the new max and min values.

    ```cpp
    // 2 comparisons
    if (max < num3)
      max = num3;

    if (min > num3)
      min = num3;
    ```
With this approach the total number of comparisons is 3, which is the theoretical minimum number, so the code will be faster and more efficient.

### Ejercicio 5

In this excercise we print directly the results of the operations, so we don't need to declare and initialize variables to store them.
```cpp
cout << "The result is: " << 20 + 3 << endl; // Prints 23 
```

### Ejercicio 6

1. Part a.

    I use 8 print statements in order to print the requested pattern.

2. Part b.

    For this part, the excercise tells me to use the minimum amount of instructions. So, I decided to store each row structure in two different strings, and then printing them using a for loop.

    ```cpp
    string pattern1 = "* * * * * * * *\n";
    string pattern2 = " * * * * * * * *\n";
    
    for(int lines = 0; lines < 8; lines+=2)
      cout << pattern1 << pattern2; 
    ```

    I don't like this approach, but it is the one that uses the minimum amount of instructions. The problem with this is that you manually have to change the two strings and the for loop if you want to change the pattern.

    My desired approach would be to use two nested for loops and then use if statements to decide whether to print the asterisks or the blank spaces. With this approach, you only need to change the pattern size to create any different pattern. The downside is that it uses a lot more of instructions than the other approach.

    ```cpp
    for (int rows = 0; rows < rowSize; rows++) {

      for (int columns = 0; columns < columnSize; columns++) {
        if ( ( rows + columns ) % 2 == 0)
          cout << "*";
        else
          cout << " ";
      }

      cout << endl;
    }
    ```

    Today, I asked the proffesor and told me to use the scalable approach, so I change it.

### Ejercicio 7

1. Loop choose
    
    In order to obtain the digits of the integer we need to use a loop.
    So we could choose to use a for loop or a while loop.
    I first tried to use a while loop because then I could reuse the code if they asked me for a different number of digits integer,
    but that didn't work well because the while loop stopped after founding a 0, which is fine in some cases like when I input 51234 or an integer with the 0 last
    like 23490, but if the number is 10897 or 10000 it would stop after the digit with the 0 is reached.

    The only thing I didn't like for this approach is that you have to manually set the max number of digits you want,
    so for example if you choose 10 as the max number of digits and then you input 134, it will print 0's before 134

    ```cpp
    while (num != 0) {
      split = pow(10.0, digit -1); // digit equals to the max number of digits
      cout << num / split << "   ";
      num %= split;
      digit--;
    }
    ```

    Later I use the for loop, which will work flawlessly for any 5 digit integer, but if you want to use it for more or less than 5 digits, then it doesn't work.
    I decided to use this because the exercise stipulates that the integer has to be 5 digits long. If you want it to work for any digits integer, then you would have to calculate the number of digits that the input number has, which could be done but is more complex, and less efficient.

    ```cpp
    for (int digit = 5; digit > 0; digit--) {

      /* Set split equal to 10^(digit position - 1), this means that in
      order to obtain the digit in the fifth position, we need to divide by 10^4 = 10000 */
      split = pow(10.0, digit -1);
      cout << num / split << "   ";

      /* Then we need to obtain the smaller digits, so we use the modulo, for example:
      to obtain 12 in the number 412 we do 412 % 100 */
      num %= split;
    }
    ```

2. Negative integer
    
    The problem I have is that the modulo operator works poorly for negative numbers.
    So for expample if:

    ```cpp
    result = -35 % 10
    ```

    You would expect the result to be 5, but in this case the result would be -5.
    
    So in order to avoid that I use an if statement to print the minus symbol before and the convert the number to a positive one.

    ```cpp
    if (num < 0){
      cout << "-   "; // print the minus symbol
      num *= -1;  // Convert the number to a positive one
    }

    // If enter -12, would print: -   1   2
    ```

    I decided to print the minus symbol in the same way as the digits, with three blank spaces after, so not only the first digit is negative. I prefer this way because it represent better that the number is the one that is negative and not the first digit only.

### Ejercicio 8
1. Part a.

    In the while loop I choose the condition to be greater than one because then if the number is 1, it doesn't need to enter the loop.
    
    This is a thing because I assing to the result to the number input, only checking if the number is 0, and then setting the result to 1

    ```cpp
    if (num == 0)
      factorial = 1;
    else 
      factorial = num;

    // n! = n(n-1)(n-2)... Factorial equation

    while (num > 1) {
      num --;
      factorial *= num;
    }
    ```
2. Part b.

    In this excercise I choose to use a function based on the one I used in the previous part to calculate the factorial in order to make the code look cleaner. Also the function needed to return a double because if not the division done later would return an int.

    ```cpp
    double factorial(int number) {
      double fact;

      // n! = 1 if n is 0 or 1. If n is 1 i in the loop below
      if (number == 0)
        fact = 1;
      else 
        fact = number;

      // n! = n(n-1)(n-2)... Factorial equation

      while (number > 1) {
        number --;
        fact *= number;
      }
      return fact;
    }
    ```

    Also the other problem I encounter was the same one that I had on excercise 1. [Problem of excercise 1](#ejercicio-1)

3. Part c.

    To solve the problem I reuse the same code I used in the previous part.

    Also I asked the user to enter the power of e to calculate because this wasn't asked in the excercise, but I think is more complete this way.

### Ejercicio 9
The only issue I encountered during this excercise was that the number of iterations wasn't equal to the number of terms of the series, so I had to add one to the iterations when I needed to print them into the table.

```cpp
// Add 1 to the iterations to have the number of terms of the series
cout << left << setw(15) << iterations + 1 << left << setw(15) << pi << endl;
```
### Ejercicio 10

I decided to generalize the formulas used, so that the code can be used for any type of figure with an odd number ( 11x11, 15x15, .... ).
```cpp
int squareSize = 9; // Must be and odd number: 11, 13, 7, ...

// Top and left vertex is square - 1 / 2. Represented by T.
int topLeftVertex = (squareSize - 1)/ 2;
// Bottom and right vertex is top + square -1. Represented by B.
int bottomRightVertex = topLeftVertex + (squareSize - 1);

     0 1 2 3 4 5 6 7 8
  0          T 
  1        * * * 
  2      * * * * * 
  3    * * * * * * * 
  4  T * * * * * * * B
  5    * * * * * * * 
  6      * * * * * 
  7        * * * 
  8          B 
```
I use the following formulas to calculate the spaces where I don't need to print the asterisks. So the number 1 and 2 are used to print blank spaces and the number 3 and 4 are used to break the inner loop.

1. Top Left blank space

    To obtain the triangle space between (0,3) and (0,3) I did observed that the blank spaces are situated when the sum of the rows and columns is below 4. The formula for this space is:
    ```cpp
    // For example: Row 1, Column 3 = 4 not < 4 or Row 2, Column 0 = 2 < 4 
    if ( rows + columns < topLeftVertex) 
      cout << space;
    ```
2. Bottom Left blank space

    The formula used in the triangle between (5,8) and (0,3) is:
    ```cpp
    // For example: Row 5, Column 0 = 5 > 4 + 0 * 2 or Row 7, Column 3 = 9 not > 4 + 3 * 2 
    if ( rows + columns > topLeftVertex + columns * 2) 
      cout << space;
    ```

3. Top Right blank space

    In this space and in the next I decided to use a break statement instead of printing blank spaces, because it reduces the amount of print statements, the result will be the same and also will be much faster because it doesn't need to loop as much times as with printing blank spaces.

    The formula used in the triangle between (0,3) and (5,8) is:
    ```cpp
    // For example: Row 2, Column 7 = 9 > 4 + 2 * 2 or Row 3, Column 6 = 9 not > 4 + 3 * 2 
    if ( rows + columns > topLeftVertex + rows * 2) 
      break;
    ```
4. Bottom Right blank space

    In this space, as said before, I used a break statement instead of printing blank spaces.
    
    The formula used in the triangle between (5,8) and (5,8) is:
    ```cpp
    // For example: Row 5, Column 6 = 11 not > 12 or Row 7, Column 7 = 14 > 12 
    if ( rows + columns > bottomRightVertex ) 
      break;
    ```

### Bonus
I accidentally made the bonus excercise while making the [excercise 10](#ejercicio-10), and it also works for higher odd numbers than 19.

I also added a fail protection in case someone inputs an even number or a negative one.
