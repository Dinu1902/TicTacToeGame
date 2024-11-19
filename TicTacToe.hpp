#pragma once
#include <iostream>

class TicTacToe {
private:
    char board[3][3];  // Tabla de joc

public:
    TicTacToe();        // Constructor pentru inițializarea tablei
    void DrawBoard();   // Afișează tabla de joc
    bool MakeMove(char player, int row, int col); // Realizează o mutare

    // Aceste funcții trebuie să fie publice pentru a putea fi apelate în main()
    bool CheckWinner(); // Verifică dacă există un câștigător
    bool CheckTie();    // Verifică dacă există o remiză
};
