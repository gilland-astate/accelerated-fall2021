# Homework 2 - File Input/Output

Mr. N. Vestor owns several different stocks. Data regarding these stocks can be found in a plain text file. Write a program that will read specific information from the file and display that information to the screen.

The **stockData.txt** file contains the following information:

AMD:Advanced Micro Devices, Inc.:21.93:1.08▲5.18%:106969413:154:5  
INTC:Intel Corporation:47.04:2.72▼5.47%:81516647:2345:25   
MU:Micron Technology, Inc.:38.96:2.37▲6.48%:58897529:98:3   
WDC:Western Digital Corporation:43.16:3.02▲7.52%:36281583:643:44   
AAPL:Apple Inc.:157.76:5.06▲3.31%:31874469:739:56   
MSFT:Microsoft Corporation:107.17:0.97▲0.91%:29183956:215:23   

The pieces of data above are delimited using the : character. Each line of data contains the following in the order listed: 
* the stock's symbol
* name of a NASDAQ stock
* the stock's value at close of day the day this report was generated
* how much the stock's value has changed since the last report
* an arrow indicating if the stock increased or decreased in value
* how much the stock's value has changed since the last report as a percentage
* the share volume
* the number of shares owned prior to this report
* the number of shares purchased the day this report was generated
* a single space

 
In the file **hw2Stock.cpp** program add code to perform the following.


Use get(), getline() and ignore() as needed to read the needed pieces of data from the stock information file. Any data that is not needed should be ignored rather than read. For the first five stocks, display, to the screen, the name of the stock, the stock's value, the total number of shares owned (the number of shares owned prior to this report plus the shares purchased the day the report was generated) and display the total amount of worth (the number of shares owned multiplied by the stock's value from this report).


> The above stock information would produce the following output on the screen.  
> **The output of your program should look exactly like this. Data values may differ.**

    Stock Name                                Value  Quantity  Total Worth
    Advanced Micro Devices, Inc.              21.93       159      3486.87
    Intel Corporation                         47.04      2370    111484.80
    Micron Technology, Inc.                   38.96       101      3934.96
    Western Digital Corporation               43.16       687     29650.92
    Apple Inc.                               157.76       795    125419.20

> 10% HW Bonus: Display the numbers using commas.  
> **The output of your program should look exactly like this. Data values may differ.**

    Stock Name                                Value  Quantity  Total Worth
    Advanced Micro Devices, Inc.              21.93       159     3,486.87
    Intel Corporation                         47.04     2,370   111,484.80
    Micron Technology, Inc.                   38.96       101     3,934.96
    Western Digital Corporation               43.16       687    29,650.92
    Apple Inc.                               157.76       795   125,419.20

----
*Spend enough time with pencil and paper to satisfy yourself that you truly understand the problem and can work examples by hand before starting to write program code; you cannot explain a solution to a computer if you do not understand it yourself. If you find you do not understand a problem well enough to work examples by hand, seek out input from your instructor or fellow classmates; discussion with classmates can be particularly rewarding for both parties (as long as collaboration stops here). Start as early as you can to give yourself every opportunity to think through a solution; starting close to the deadline increases pressure on you and can make it even harder to think.*