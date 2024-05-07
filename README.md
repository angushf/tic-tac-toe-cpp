## C++ Tic Tac Toe

### Description

This C++ Tic Tac Toe game provides a simple, yet engaging two-player gaming experience from the command line. It is built using standard C++ libraries and demonstrates the use of fundamental programming concepts such as vectors, loops, and conditional logic.

### Features
+ Two-player gameplay on a single computer
+ Simple and intuitive text-based UI
+ Dynamic win condition checking for all rows, columns, and diagonals
+ Input validation to prevent overwriting moves

### Getting Started

#### Dependencies
+ C++ Compiler (GCC recommended, version 8.0 or higher)

#### Installing & Building
1. Clone the repository: <br>
   ```bash
   git clone https://github.com/angushf/tic-tac-toe-cpp.git
   cd tic-tac-toe-cpp

2. Compile the program:
   ```bash
   g++ -o TicTacToe ttt.cpp ttt_functions.cpp

#### Executing Program

3. Run the program through the command line:
   ```bash
   ./TicTacToe

Follow the on-screen prompts to play the game. Players will take turns inputting their moves.

### Help

If you encounter any issues, please take a look at the following points below:

+ *Issue: Game does not start*
  + Ensure that your C++ compiler is up to date and correctly configured
+ *Issue: Inputs are not recognized*
  + Inputs should be integers from 1 to 9 corresponding to the board positions as shown in the game.
  ```bash
   [1] | [2] | [3]
   ----------------
   [4] | [5] | [6|
   ----------------
   [7] | [8] | [9]

### Version History
+ 0.1
  + Initial Release
 
