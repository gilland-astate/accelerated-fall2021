# Exercise 8 - Repetition do-while

## Reading Multiple Values from a File
The data file repetitionAveragesData.txt, available in this repository, contains several lines of data. Each line of data consists of an integer followed by a series of floating-point values all separated by space. The integer indicates the number of floating-point numbers that follow. To know when we have reached the end of the file we need to check the EOF flag; this flag is only set when we try to reach the end of the file and try an additional read. So, in order to catch this we need to use a do-while loop to trigger it for the first time. A sample data file might look like the following:

    5 5.7 8.7 4.9 6.72 6.41
    9 2.1 1.99 2.01 1.8734 1.746 1.914 2.00345 1.70 1.69
    3 28.4323345 28.499234 28.432451

Write a program that will calculate the average for each line of data. The averages should be stored in the file repetitionAverages.txt with one average per line. All averages should be stored in the file with 15 decimal places of precision.

Test your program using the supplied test data, modifying it if you wish. Your program will be tested using different data during the grading process. That file my contain more or less data.