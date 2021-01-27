# Exercise 5 - File Input/Output

Write a simple program that will input data from a file compute a total and write out to the file. 

In the program you will do the following:
* Read in two values from a file *grades.txt*:
    * The first line of the file contains the exam scores
    * The second line of the file contains lab scores
    * The third lane should be blank (currently)
* Calculate a weighted average based upon the input.
    * Exam scores will be 70% of the overall average
    * Lab scores will be 30% of the overall average
* Output the weighted average on the last line of the file. *In order to do this you will have to open the file in append mode.*

---
> Data in grades.txt (either copy/paste or download) and make sure there is a blank line at the end of the file where we will output the average.

    74.1
    87.5
    
>Expected output in *grades.txt*:

    74.1
    87.5
    78.12
