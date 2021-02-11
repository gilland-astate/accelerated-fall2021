# Exercise 9 - Functions w/ Value Params

Write a program that will randomly generate an integer between the numbers 1 and 100, inclusively, and then prompt the user to guess the number. Use the function given in the starter code to randomly generate the number that is to be guessed. The program should continue until the user guesses correctly. The completed program should contain the following functions.

    int generateSecretNumber()

This function should generate and return a random integer between 1 and 100, inclusively.

    int getUserGuess()

This function should prompt the user to enter his/her guess. Be sure to include the range in the prompt. Input should be validated. Once validated, the user's guess should be returned.

    bool correctGuess(int secretNumber, int guess)

This function should determine if the guess is indeed the secret number. If the guess is the secret number, the function should return true, otherwise it should return false.

    void guessingGame()

This function should perform any necessary actions to start the game, run the game and complete the game.

    main()

The following code in function main() will execute the guessing game:

    guessingGame();
    return 0;

 
Example of expected output.

    I am thinking of a number between 1 and 100.  Can you guess what it is?

    Enter an integer between 1 and 100:  50
    That is not the number.  Try again.  Enter an integer between 1 and 100:  0
    Invalid guess. Please try again.
    Enter an integer between 1 and 100:  200
    Invalid guess. Please try again.
    Enter an integer between 1 and 100:  45
    That is not the number.  Try again.  Enter an integer between 1 and 100:  2


    CONGRATULATIONS!  You guessed correctly!

For testing purposes, output the generated secret number.