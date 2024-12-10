#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <vector>
#include <string>

class TicTacToe {
public:
    TicTacToe();
    void printBoard() const;
    bool makeMove(int row, int col, char player);
    char checkWinner() const;
    bool isDraw() const;

private:
    std::vector<std::vector<char>> board;
};

#endif
