// playerMove.cpp
#include "playerMove.hpp"
#include <iostream>
using namespace std;

void playerMove(char* spaces, char player) {
    int number;
    do {
        cout << "Enter a spot to place a marker (1-9): ";
        cin >> number;
        number--;
        if (spaces[number] == ' ') {
            spaces[number] = player;
            break;
        }
    } while (!number > 0 || !number < 8);
}
