#include "TicTacToe.hpp"

TicTacToe::TicTacToe() {
    // Inițializarea tablei de joc cu spații goale
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

void TicTacToe::DrawBoard() {
    // Afișează tabla de joc
    std::cout << "  0 1 2\n";
    for (int i = 0; i < 3; i++) {
        std::cout << i << " ";
        for (int j = 0; j < 3; j++) {
            std::cout << board[i][j] << " ";
        }
        std::cout << "\n";
    }
}

bool TicTacToe::MakeMove(char player, int row, int col) {
    // Verifică dacă mutarea este validă (locul trebuie să fie liber)
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
        board[row][col] = player;
        return true;
    }
    return false;
}

bool TicTacToe::CheckWinner() {
    // Verifică dacă există o linie, coloană sau diagonală completă cu același simbol
    for (int i = 0; i < 3; i++) {
        // Verifică rânduri
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return true;
        }
        // Verifică coloane
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            return true;
        }
    }
    // Verifică diagonale
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        return true;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        return true;
    }
    return false;
}

bool TicTacToe::CheckTie() {
    // Verifică dacă tabla este completă și nu există un câștigător
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}
