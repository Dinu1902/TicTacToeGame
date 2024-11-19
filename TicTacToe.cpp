#include "TicTacToe.hpp"

// Constructorul clasei TicTacToe
TicTacToe::TicTacToe() : board(3, std::vector<char>(3, ' ')), moves(0) {}

// Funcția care desenează tabla de joc
void TicTacToe::DrawBoard() {
    std::cout << "\n";
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            std::cout << board[row][col];
            if (col < 2) std::cout << " | ";
        }
        std::cout << "\n";
        if (row < 2) std::cout << "---------\n";
    }
    std::cout << "\n";
}

// Funcția care face o mutare
bool TicTacToe::MakeMove(char player, int row, int col) {
    if (IsCellEmpty(row, col)) {
        board[row][col] = player;
        moves++;
        return true;
    }
    return false;
}

// Verifică dacă un jucător a câștigat
bool TicTacToe::CheckWinner() {
    // Verifică rânduri
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return true;
    }

    // Verifică coloane
    for (int i = 0; i < 3; ++i) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return true;
    }

    // Verifică diagonale
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return true;

    return false;
}

// Verifică dacă este remiză
bool TicTacToe::CheckTie() {
    return moves == 9 && !CheckWinner();
}

// Verifică dacă o celulă este goală
bool TicTacToe::IsCellEmpty(int row, int col) {
    return board[row][col] == ' ';
}
