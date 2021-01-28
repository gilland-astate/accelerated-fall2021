# Homework 3 - Selection

The file selectionData.txt contains data describing five rectangles, one rectangle per line.  Each line consists of four floating-point numbers separated by a space with the first two defining the lower-left corner of the rectangle, label A in drawing, and the last two defining the upper-right corner of the rectangle, label C in drawing.  These points are always stored with the x-coordinate followed by the y-coordinate.  All rectangles will be in the orientation shown below.  For this assignment, there will be no coordinate with a value of 0.0.

Write a program that will read the data for a single rectangle and determine the following:
* If the rectangle is a square.
* The (x, y) coordinates of corners B and D.
* The perimeter of the rectangle.
* The quadrant or quandrants in which the rectangle resides.  If the rectangle spans more than one quadrant, each quadrant in which any part of the rectangle resides should be listed.

>Any floating-point value should be displayed with four decimal places.

The program should read and make these determinations for all five rectangles in the file. Please be aware that the data file used when grading will contain different values but the format will be the same.

 

The following is the output that would be generated for the data file provided in the starter code:

    For the rectangle defined by the points
    (1.0000, 5.0000) (5.0000, 5.0000)
    (1.0000, 1.0000) (5.0000, 1.0000)
    The rectangle is a square.
    The perimeter is 16.0000
    The rectangle lies in the following quadrant(s):
    Quadrant I

    

    For the rectangle defined by the points
    (-1.0000, 1.0000) (1.0000, 1.0000)
    (-1.0000, -1.0000) (1.0000, -1.0000)
    The rectangle is a square.
    The perimeter is 8.0000
    The rectangle lies in the following quadrant(s):
    Quadrant I
    Quadrant II
    Quadrant III
    Quadrant IV

    

    For the rectangle defined by the points
    (-1.0000, 5.0000) (5.0000, 5.0000)
    (-1.0000, 1.0000) (5.0000, 1.0000)
    The perimeter is 20.0000
    The rectangle lies in the following quadrant(s):
    Quadrant I
    Quadrant II

    

    For the rectangle defined by the points
    (-10.0000, -5.0000) (5.0000, -5.0000)
    (-10.0000, -10.0000) (5.0000, -10.0000)
    The perimeter is 40.0000
    The rectangle lies in the following quadrant(s):
    Quadrant III
    Quadrant IV

    

    For the rectangle defined by the points
    (3.5962, 12.6932) (21.4530, 12.6932)
    (3.5962, -9.2350) (21.4530, -9.2350)
    The perimeter is 79.5701
    The rectangle lies in the following quadrant(s):
    Quadrant I
    Quadrant IV