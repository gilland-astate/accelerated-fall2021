# Exercise 11 - Vectors

    Complete the following code without the use of auto.

1) Write a function, *getAverages*, that will prompt the user for a series of exam averages for an unspecified number of students in a class. The user should enter a negative exam average to indicate the end of data. Exam averages should be stored in the vector indicated by the reference parameter.

2) Write a function, *storeAverages*, that will accept two parameters, a vector containing exam averages and a string containing the name of a file. The function should store the averages to the file specified in the filename parameter, one average per line. If a file with that filename already exists, its contents should be overwritten. The function should not be able to modify the averages stored in the vector.  This function should use the range-based for loop.

3) Write a function, *curveAverages*, that will accept two parameters, a vector containing exam averages to be curved and a floating-point number which should be added to each average. The function must be able to modify the averages in the vector. The function should use a regular for loop and the at() member function.

4) Write a function, *calculateClassAverage*, that will accept a single parameter, the vector containing the students' exam averages. The function should compute and return the average of the class' exams.  The function should not be able to modify the averages stored in the vector.
    
Include code in the main that will allow the user to specify the exam averages, the number of points to curve each average and a file name for storing the averages. The code should curve the averages, calculate the class average, which should then be displayed to the screen, and then store the exam averages in the file specified by the user.