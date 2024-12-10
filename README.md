# Tic Tac Toe

## Project Overview
This project is a simple implementation of the classic **Tic Tac Toe** game written in C++. It includes a working game that runs in the terminal, as well as unit tests written using GoogleTest to ensure the correctness of the game logic.

---

## Features
- A 3x3 grid where two players (X and O) take turns making moves.
- Winning conditions are detected, such as completing:
  - A row
  - A column
  - A diagonal
- Handles invalid moves gracefully (e.g., attempts to overwrite existing moves).
- Includes tests to validate game logic (e.g., detecting a winner, valid moves, etc.).

---

## Project Structure
The project is organized as follows:
lab06/ ├── src/ │ ├── TicTacToe.cpp # Implementation of game logic │ ├── TicTacToe.h # Declaration of the Tic Tac Toe class │ ├── main.cpp # Main application entry point ├── tests/ │ ├── main.cpp # GoogleTest test suite ├── build/ # Directory for build files (created during compilation) ├── CMakeLists.txt # CMake configuration file ├── README.md 

---

## Requirements
To build and run the project, you’ll need:
- **C++ Compiler** (GCC, Clang, or MSVC)
- **CMake** (version 3.10 or higher)
- **GoogleTest** (installed via package manager or included as a submodule)

---

## How To build and run the project, you’ll need:
- **C++ Compiler** (GCC, Clang, or MSVC)
- **CMake** (version 3.10 or higher)
- **GoogleTest** (installed via package manager or included as a submodule)

## Clone the Repository
```bash
git clone https://github.com/<your-username>/lab06.git
cd lab06

