#include "TicTacToe.hpp"
#include <iostream>

TicTacToe::TicTacToe() : board(3, std::vector<char>(3, ' ')), moves(0) {}

void TicTacToe::DrawBoard() const {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

bool TicTacToe::MakeMove(char player, int row, int col) {
    if (IsCellEmpty(row, col)) {
        board[row][col] = player;
        moves++;
        return true;
    }
    return false;
}

bool TicTacToe::CheckWinner() const {
    // Verificare rânduri, coloane și diagonale pentru câștigător
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return true;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return true;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return true;

    return false;
}

bool TicTacToe::CheckTie() const {
    return moves == 9 && !CheckWinner();
}

bool TicTacToe::IsCellEmpty(int row, int col) const {
    return board[row][col] == ' ';
}
