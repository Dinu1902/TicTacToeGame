#include "Board.hpp"
#include "Player.hpp"
#include "Computer.hpp"
#include "WinnerCheck.hpp"
#include "TieCheck.hpp"

int main() {
    char spaces[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
    char player = 'X';
    char computer = 'O';
    bool running = true;

    Board board;
    Player playerMove;
    Computer computerMove;
    WinnerCheck winnerCheck;
    TieCheck tieCheck;

    board.drawBoard(spaces);

    while (running) {
        playerMove.playerMove(spaces, player);
        board.drawBoard(spaces);

        if (winnerCheck.checkWinner(spaces, player, computer)) {
            running = false;
            break;
        } else if (tieCheck.checkTie(spaces)) {
            running = false;
            break;
        }

        computerMove.computerMove(spaces, computer);
        board.drawBoard(spaces);

        if (winnerCheck.checkWinner(spaces, player, computer)) {
            running = false;
            break;
        } else if (tieCheck.checkTie(spaces)) {
            running = false;
            break;
        }
    }

    return 0;
}
