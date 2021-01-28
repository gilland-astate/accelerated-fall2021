# Exercise 6 - Selection

A palindrome is a number or text phrase that reads the same backwards as forwards. The integer 454 is an example of a three-digit palindrome because the first and last digits are a match. 2442 is an example of a four-digit palindrome because the first digit matches the last digit and the second digit matches the third digit. 12321 is an example of a five-digit palindrome and 246642 is an example of a six-digit palindrome.

Begin by writing a program that will read an integer and determine whether it is a three-digit palindrome. If the user enters an integer that is not three-digits, display an appropriate error message and end the program.

In order to determine the number of digits, consider the smallest three-digit integer. Now consider the largest possible three-digit integer. These two values will define the range for three-digit integers. The program must determine if the integer entered by the user falls within this range.

Use the integer division and modulus operators to determine the individual digits of the number.  If the first and third digits are the same, output a message to the user to indicate the number they entered is a palindrome; otherwise, output a message to the screen informing the user that the number is not a palindrome.

Once the program is working correctly with three-digit integers, add the necessary to code to make the program work for four- and five-digit integers as well. If the user enters an integer that is not three, four or five digits in length, the program should display a message informing the user that the number entered is not within the range specified and end the program.

```
**Important**
For this assignment, you must find a way to determine if the number is a palindrome using only mathematical operations. Any program that uses string or character manipulation instead of mathematical operations will not be considered a valid solution.
```

> Example Output:
    
    Enter a three-, four- or five-digit positive integer: 5

    5 is not within the range specified. Exiting...

> Example Output:

    Enter a three-, four- or five-digit positive integer: 121
    121 is a palindrome.

> Example Output:

    Enter a three-, four- or five-digit positive integer: 134
    134 is not a palindrome.

> Example Output:

    Enter a three-, four- or five-digit positive integer: 123454321

    123454321 is not within the range specified. Exiting...