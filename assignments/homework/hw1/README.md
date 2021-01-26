# Homework 1 - Division Algorithm
    
The division algorithm states that given two integers <img src="https://render.githubusercontent.com/render/math?math=a"> and <img src="https://render.githubusercontent.com/render/math?math=d">, where <img src="https://render.githubusercontent.com/render/math?math=d\neq0"> , there exists unique integers <img src="https://render.githubusercontent.com/render/math?math=q"> and <img src="https://render.githubusercontent.com/render/math?math=r"> such that <img src="https://render.githubusercontent.com/render/math?math=a = qd + r"> and <img src="https://render.githubusercontent.com/render/math?math=0\leq r \leq |d|">, where <img src="https://render.githubusercontent.com/render/math?math=|d|"> denotes the absolute value of <img src="https://render.githubusercontent.com/render/math?math=d">. The integer <img src="https://render.githubusercontent.com/render/math?math=q"> is the quotient, <img src="https://render.githubusercontent.com/render/math?math=r"> is the remainder, <img src="https://render.githubusercontent.com/render/math?math=d"> is the divisor, and <img src="https://render.githubusercontent.com/render/math?math=a"> is the dividend.

You are to write a program named hw1Division.cpp that will prompt the user for a dividend and divisor and then display the division algorithm's results in the sentence format below (four separate examples are shown):

    If a = 17 and d = 3, then q = 5 and r = 2, since 17 = (5)(3) + 2.

    If a = 17 and d = -3, then q = -5 and r = 2, since 17 = (-5)(-3) + 2.

    If a = -17 and d = 3, then q = -6 and r = 1, since -17 = (-6)(3) + 1.

    If a = -17 and d = -3, then q = 6 and r = 1, since -17 = (6)(-3) + 1.


In testing your program, consider the four possible combinations of positive and negative dividends and divisors (as shown above).

## Exceptions - Read Carefully
The C++ operators for integer division do not conform to the division algorithm. Explain in output displayed to the user of the program when to expect results that disagree with the division algorithm. The program should not attempt to resolve this issue.

----

*Spend enough time with pencil and paper to satisfy yourself that you truly understand the problem and can work examples by hand before starting to write program code; you cannot explain a solution to a computer if you do not understand it yourself. If you find you do not understand a problem well enough to work examples by hand, seek out input from your instructor or fellow classmates; discussion with classmates can be particularly rewarding for both parties (as long as collaboration stops here). Start as early as you can to give yourself every opportunity to think through a solution; starting close to the deadline increases pressure on you and can make it even harder to think.*