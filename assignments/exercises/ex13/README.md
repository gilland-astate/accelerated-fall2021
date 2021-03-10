# Exercise 13 - Structures

Write a modular program (see the note below the expected output) that stores the following data about a soccer player in a structure:

* Player's Full Name
* Player's Jersey Number
* Goals Made by Player

The program should keep a vector of these structures.

Each element is for a different player on a team. When the program runs, it should prompt the user to enter the data for each player on the team allowing the user to indicate when there is no further data to add.

The program should only accept jersey numbers in the range of 0 to 99. The program should not accept negative numbers for players' goals. The program should prompt separately for a first name and last name for a player's name. The program should store these names as the player's full name in the format of last name, first name.

----------
The following demonstrates the input process for a player:

    Enter player's first name (zzz to end): John
    Enter player's last name: Doe
    Enter player's jersey number (0 to 99): -45
    Enter player's jersey number (0 to 99): 111
    Enter player's jersey number (0 to 99): 45
    Enter number of goals made by player: -4
    Enter number of goals made by player: 4

    Enter player's first name (zzz to end): zzz

The program should display to the screen

* a table that lists each player's full name (width of 20 characters), jersey number (width of 15 characters) and goals scored (width of 7 characters) in the order of the player's jersey number
* the total goals earned by the team

----------
Example of expected output.

    Player Name           Jersey Number  Goals
    ------------------------------------------
    Smith, John                      34      2
    Doe, John                        45      4
    Fudd, Elmer                      90      7

    Total Goals: 13

Your modular program should have at least 3 functions in it besides function main().  One function should get the data from the user and store it into the vector.  Another should sort the vector.  While another one should display the data to the screen.  If you want to write additional helper functions, you may.