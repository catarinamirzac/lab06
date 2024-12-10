#include <gtest/gtest.h>
#include "../src/TicTacToe.h"

TEST(TicTacToeTest, InitialBoardEmpty) {
    TicTacToe game;
    EXPECT_EQ(game.checkWinner(), '\0');
    EXPECT_FALSE(game.isDraw());
}

TEST(TicTacToeTest, ValidMove) {
    TicTacToe game;
    EXPECT_TRUE(game.makeMove(0, 0, 'X'));
    EXPECT_EQ(game.checkWinner(), '\0');
}

TEST(TicTacToeTest, InvalidMove) {
    TicTacToe game;
    game.makeMove(0, 0, 'X');
    EXPECT_FALSE(game.makeMove(0, 0, 'O'));
}

TEST(TicTacToeTest, WinnerDetection) {
    TicTacToe game;
    game.makeMove(0, 0, 'X');
    game.makeMove(0, 1, 'X');
    game.makeMove(0, 2, 'X');
    EXPECT_EQ(game.checkWinner(), 'X');
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
