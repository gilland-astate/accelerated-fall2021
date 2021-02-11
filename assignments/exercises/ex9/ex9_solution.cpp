#include <iostream>
#include <string>
using std::cout;


int generateSecretNumber();
int getUserGuess();
bool correctGuess(int secretNumber, int guess);
void guessingGame();

int main () {
    std::srand(0);
    guessingGame();
    return 0;
}

// This function should generate and return a random integer between 1 and 100, inclusively.
int generateSecretNumber() {
    return (rand()%100)+1;
}

//This function should prompt the user to enter his/her guess. Be sure to include the range in the prompt. 
//Input should be validated. Once validated, the user's guess should be returned.
int getUserGuess() {

    return 0;
}

//This function should determine if the guess is indeed the secret number. If the guess is the secret number, 
//the function should return true, otherwise it should return false.
bool correctGuess(int secretNumber, int guess) {

    return 0;
}

//This function should perform any necessary actions to start the game, run the game and complete the game.
void guessingGame() {
    generateSecretNumber();
}