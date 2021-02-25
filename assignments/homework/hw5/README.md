# Homework 5 - Vectors

This assignment should utilize the vector container of the STL using techniques discussed in class; it should not utilize the algorithms of the STL. Array notation (the subscript operator) should not be used to access the data.  Add code to the spHWstatistics.cpp program for the following functions using the function headers provided.  Additional helper functions may be written.  Test data has been provided in the plain text file vectorTestData.txt; any data file will contain a single integer per line with an unknown number of lines.

----
    double calcMean (const vector<int>&);

The mean or average of a group of  numbers , ,   is the sum of the numbers divided by how many there are; it is represented by .

----
    double calcStandardDeviation (const vector<int>&);

The standard deviation of the same group of  numbers is given by the following formula.

Note that function calcStandardDeviation should in turn call function calcMean in order to implement its formula above.

----
    void displayValues(const vector<int>&);

Display the contents of the vector to the screen 16 numbers per line with all numbers shown in columns of width 5.

----
    int findMaximum(const vector<int>&);

Find Maximum Number in an Vector:
* establish a variable max to hold the value of the first element of the vector
    * setup a loop to traverse the vector, the body of the loop should contain code to do the following:
        * determine if max is smaller than the vector value at the current location in the vector
        * reset max to the new largest value
* return max to the calling function

----
    int findSecondMaximum(const vector<int>&);

Similar to the findMaximum function except it finds the second largest value in the vector.

------
    void readValues(string, vector<int>&);

Data contained in the file indicated by the filename specified in the string should be read into the vector indicated by the reference parameter. If a file with that filename cannot be found, the program should report the error to the user and immediately end.

----
    int main()

Arrange function main so that it immediately reads a set of values from the file vectorTestData.txt using the readValues function; it should then present the user repeatedly with the following options:

    1. find maximum
    2. find 2nd maximum
    3. find mean
    4. find standard deviation
    5. display values
    6. read a new set of values
    7. exit program


When the user chooses to read a new set of values s/he should be prompted for the name of the file containing the values to be read