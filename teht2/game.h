#ifndef GAME_H
#define GAME_H
#include <stdio.h>
#include <iostream>

using namespace std;

class Game
{
public:
    Game(int);
    ~Game();
    void play();

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

    void printGameResult();
};

#endif // GAME_H
