#include "TicTacToe.hpp"
#include <iostream>
#include <vector>

TicTacToe::TicTacToe() 
    : board(3, std::vector<char>(3, ' ')),  // Tabla 3x3 inițializată cu spații
      moves(0)                             // Numărul de mutări inițial este 0
{}

bool TicTacToe::MakeMove(char player, int row, int col) {
    if (IsCellEmpty(row, col)) {
        board[row][col] = player;
        moves++;
        return true;
    }
    return false;
}

bool TicTacToe::CheckWinner() const {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return true;
        }
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return true;
        }
    }
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return true;
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return true;
    }
    return false;
}

bool TicTacToe::CheckTie() const {
    return moves == 9 && !CheckWinner();
}

bool TicTacToe::IsCellEmpty(int row, int col) {
    return board[row][col] == ' ';
}

void TicTacToe::DrawBoard() const {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;  // Trecerea la linia următoare după fiecare rând al tablei
    }
}
