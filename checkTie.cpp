// checkTie.cpp
#include "checkTie.hpp"
#include <iostream>
using namespace std;

bool checkTie(char* spaces) {
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') {
            return false;
        }
    }
    cout << "IT'S A TIE!\n";
    return true;
}
