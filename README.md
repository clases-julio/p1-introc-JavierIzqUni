# P1-IntroCPP

## Observations

### Ejercicio 1


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

    Also the other problem I encounter was the same one that I had on excercise 1. [Problem of excercise 1](/README###Ejercicio1)