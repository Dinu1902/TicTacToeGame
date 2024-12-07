#include "TicTacToe.hpp"
#include <iostream>

int main() {
    TicTacToe game;
    game.DrawBoard();

    char player = 'X';
    int row, col;

    while (!game.CheckWinner() && !game.CheckTie()) {
        std::cout << "Player " << player << ", enter row (0-2) and column (0-2): ";
        std::cin >> row >> col;

        if (game.MakeMove(player, row, col)) {
            player = (player == 'X') ? 'O' : 'X';  // Schimbă jucătorul
        } else {
            std::cout << "Invalid move! Try again.\n";
        }

        game.DrawBoard();
    }

    if (game.CheckWinner()) {
        std::cout << "We have a winner!\n";
    } else {
        std::cout << "It's a tie!\n";
    }

    return 0;
}
