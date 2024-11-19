#include <iostream>
#include "TicTacToe.hpp"

int main() {
    TicTacToe game;
    char player = 'X';  // Jucătorul curent
    int row, col;       // Coordonatele pentru mutare
    bool gameOver = false;

    while (!gameOver) {
        game.DrawBoard();
        std::cout << "Player " << player << ", enter row and column (0-2): ";
        std::cin >> row >> col;

        // Încearcă să facă mutarea
        if (game.MakeMove(player, row, col)) {
            // Verifică dacă există un câștigător
            if (game.CheckWinner()) {
                game.DrawBoard();
                std::cout << "Player " << player << " wins!" << std::endl;
                gameOver = true;
            } 
            // Verifică dacă există remiză
            else if (game.CheckTie()) {
                game.DrawBoard();
                std::cout << "It's a tie!" << std::endl;
                gameOver = true;
            }

            // Schimbă jucătorul
            player = (player == 'X') ? 'O' : 'X';
        } else {
            std::cout << "Invalid move, try again." << std::endl;
        }
    }

    return 0;
}
