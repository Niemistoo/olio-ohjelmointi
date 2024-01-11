#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

// Function prototype
int game(int maxnum);

int main() {

    // Create Seed for rand()
    srand(time(NULL));
    bool game_is_on = true;

    while (game_is_on) {

        int numberOfGuess = game(100);
        char prompt;

        // Play again?
        cout << "It took " << numberOfGuess << " guesses!" << endl;
        cout << "Do you want to play again? (y/n): ";
        cin >> prompt;
        if (prompt != 'y' && prompt != 'Y') {
            game_is_on = false;
        }
    }

    return 0;
}

// Logic for Number guessing game
int game(int maxnum) {

    int randomNumber = rand() % maxnum + 1;
    int userInput = 0;
    int guessCount = 0;

    do {
        guessCount += 1;
        cout << "Guess the number between (1-" << maxnum <<"): ";

        // Verify that entered value is integer or enter the prompt again
        while (!(cin >> userInput)) {
            cin.clear();  // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard invalid input
            cout << "Invalid input. Please enter a valid integer.\n";
            cout << "Guess the number between (1-" << maxnum <<"): ";
        }

        // Checks if user guessed the number right
        if (userInput > randomNumber) {
            cout << "Number is smaller.." << endl;
        } else if (userInput < randomNumber) {
            cout << "Number is greater.." << endl;
        } else {
            cout << "Oikein!" << endl;
        }
    } while (userInput != randomNumber);

    return guessCount;
}
