#include <iostream>
#include <cassert>
#include "TicTacToe.hpp"

void testMakeMove() {
    TicTacToe game;
    assert(game.MakeMove('X', 0, 0) == true);
    assert(game.MakeMove('O', 0, 0) == false);  // Celula este deja ocupată
}

void testCheckWinner() {
    TicTacToe game;
    game.MakeMove('X', 0, 0);
    game.MakeMove('X', 0, 1);
    game.MakeMove('X', 0, 2);
    assert(game.CheckWinner() == true);  // X câștigă pe rândul 0
}

void testCheckTie() {
    TicTacToe game;
    // Fă jocul să fie o remiză (9 mișcări fără câștigător)
    game.MakeMove('X', 0, 0);
    game.MakeMove('O', 0, 1);
    game.MakeMove('X', 0, 2);
    game.MakeMove('X', 1, 0);
    game.MakeMove('O', 1, 1);
    game.MakeMove('X', 1, 2);
    game.MakeMove('X', 2, 0);
    game.MakeMove('O', 2, 1);
    game.MakeMove('O', 2, 2);
    assert(game.CheckTie() == true);  // Remiză
}

int main() {
    testMakeMove();
    testCheckWinner();
    testCheckTie();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
