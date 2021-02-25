# Exercise 12 - Searching/Sorting

Write a function, descendingBubbleSort, that will sort the elements of a vector of integers in descending order. Descending order means the first element is the largest and the last element is the smallest. Use the following algorithm to complete this function.
    
    establish variable to keep track of the number of elements that have been sorted into place
    loop as long as a swap occurs during the loop
    {
        set Boolean variable to indicate that no swaps have occurred

        loop through data beginning with first element and ending with the element two prior to the last data value to be put in place
        {
            determine if the current element's data value and the next element's data value should be swapped
            {
            swap the data values
            set the Boolean variable to indicate that a swap has occurred
            } 
        } 

          increment the variable indicating the number of values that have been sorted into place
       }

Write a function, sortedDescendingLinearSearch, that will search a vector containing sorted integers for a particular integer, valueToFind. Your code should take advantage of the fact that the data is sorted and stop searching the data as soon as it becomes apparent that the valueToFind cannot be in the vector. If the valueToFind is found in the vector, the code should not continue searching. The function should return the index of where valueToFind was located in the vector or -1 to indicate that it was not found.

Include in your program a copy of function displayData, from a previous program, to display the elements of a vector to the screen.

Include code in function main that will thoroughly test these two new functions. In testing, use vectors containing at least fifteen integers.  When testing the sorting function, include a vector containing data which is already sorted in the correct order, a vector containing data sorted in the opposite order and a vector containing data that is randomly placed.  When testing the search function, test for a search value that exists only once in the vector, a search value that has multiple instances in a vector and a search value that does not exist in the vector.