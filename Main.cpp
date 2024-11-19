#include <iostream>
#include "TicTacToe.hpp"

int main() {
    TicTacToe game;
    char player = 'X';  // Primul jucător
    int row, col;

    while (true) {
        game.DrawBoard();
        std::cout << "Player " << player << ", enter row (0-2) and column (0-2): ";
        std::cin >> row >> col;

        if (!game.MakeMove(player, row, col)) {
            std::cout << "Invalid move, try again.\n";
            continue;
        }

        if (game.CheckWinner()) {
            game.DrawBoard();
            std::cout << "Player " << player << " wins!\n";
            break;
        }

        if (game.CheckTie()) {
            game.DrawBoard();
            std::cout << "It's a tie!\n";
            break;
        }

        // Schimbă jucătorul
        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}
