#include "TicTacToe.h"
#include <iostream>
using namespace std;

TicTacToe::TicTacToe() : board(3, vector<char>(3, ' ')) {}

void TicTacToe::printBoard() const {
    for (const auto& row : board) {
        for (const auto& cell : row) {
            cout << (cell == ' ' ? '.' : cell) << " ";
        }
        cout << endl;
    }
}

bool TicTacToe::makeMove(int row, int col, char player) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
        return false;
    }
    board[row][col] = player;
    return true;
}

char TicTacToe::checkWinner() const {
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return board[i][0];
        }
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return board[0][i];
        }
    }
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return board[0][0];
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return board[0][2];
    }
    return '\0';
}

bool TicTacToe::isDraw() const {
    for (const auto& row : board) {
        for (const auto& cell : row) {
            if (cell == ' ') {
                return false;
            }
        }
    }
    return checkWinner() == '\0';
}
