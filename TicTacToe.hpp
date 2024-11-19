#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include <iostream>
#include <vector>
#include <memory>

class TicTacToe {
private:
    std::vector<std::vector<char>> board;  // Tabla de joc
    int moves;  // Numărul de mutări

public:
    TicTacToe();  // Constructor
    void DrawBoard();  // Afișează tabla de joc
    bool MakeMove(char player, int row, int col);  // Realizează o mutare
    bool CheckWinner();  // Verifică dacă un jucător a câștigat
    bool CheckTie();  // Verifică dacă este remiză
    bool IsCellEmpty(int row, int col);  // Verifică dacă celula este goală
};

#endif
