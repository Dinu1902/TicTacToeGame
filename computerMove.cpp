// computerMove.cpp
#include "computerMove.hpp"
#include <cstdlib>
#include <ctime>

void computerMove(char* spaces, char computer) {
    int number;
    srand(time(0));

    while (true) {
        number = rand() % 9;
        if (spaces[number] == ' ') {
            spaces[number] = computer;
            break;
        }
    }
}
