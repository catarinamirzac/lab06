cmake_minimum_required(VERSION 3.31)

# Project name
project(TicTacToe)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Main executable for the game (TicTacToe)
add_executable(TicTacToe src/TicTacToe.cpp src/main.cpp)

# GoogleTest setup
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Test executable
add_executable(tests tests/main.cpp src/TicTacToe.cpp)
target_link_libraries(tests GTest::GTest GTest::Main)

# Register tests
add_test(NAME TicTacToeTests COMMAND tests)
