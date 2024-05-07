#include <iostream>
#include <vector>
#include "ttt_functions.hpp"

int main()
{
    std::vector<char> board(9, ' ');
    char currentPlayer = 'X';

    printWelcome();
    while (!win(board))
    {
        printBoard(board);
        int move;
        std::cout << "Player " << currentPlayer << ", enter your move (1 - 9): ";
        std::cin >> move;
        if (move >= 1 && move <= 9 && board[move - 1] == ' ') {
            board[move - 1] = currentPlayer;
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
            std::cout << "Invalid move, try again.\n";
        }
    }

    printBoard(board);
    std::cout << "Player " << (currentPlayer == 'X' ? 'O' : 'X') << " wins!\n";
    return 0;
}