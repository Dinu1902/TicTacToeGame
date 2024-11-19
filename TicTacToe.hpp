#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include <vector>

class TicTacToe {
private:
    std::vector<std::vector<char>> board;  // Tabla de joc 3x3
    int moves;  // Numărul total de mutări efectuate
public:
    TicTacToe();
    bool MakeMove(char player, int row, int col);
    bool CheckWinner() const;
    bool CheckTie() const;
    bool IsCellEmpty(int row, int col);
    void DrawBoard() const;
};

#endif
