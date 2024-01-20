#include "game.h"

Game::Game(int max)
{
    maxNumber = max;
    randomNumber = rand() % maxNumber +1;

    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value" << endl;
}

Game::~Game()
{
    cout << "GAME CONSTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{
    while(playerGuess != randomNumber) {
        cout << "Give your guess between 1-" << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses += 1;

        if (playerGuess == randomNumber) {
            cout << "Your guess is right = " << playerGuess << endl;
        }
        else if (playerGuess < randomNumber) {
            cout << "Your guess is too small" << endl;
        } else if (playerGuess > randomNumber) {
            cout << "Your guess is too big" << endl;
        }
    }
    printGameResult();
}

void Game::printGameResult()
{
    cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses" << endl;
}
