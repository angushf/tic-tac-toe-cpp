#include <iostream>
#include <vector>

void printBoard(std::vector<char> board) {
    std::cout << board[0] << "  | " << board[1] << " | " << board[2] << "\n";
    std::cout << "--------\n";
    std::cout << board[3] << "  | " << board[4] << " | " << board[5] << "\n";
    std::cout << "--------\n";
    std::cout << board[6] << "  | " << board[7] << " | " << board[8] << "\n";
}

void printWelcome() {
    std::cout << "Welcome to Tic-Tac-Toe!\n";
}

bool win(std::vector<char> board) {
    std::vector<std::vector<int>> winConditions = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // Rows
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // Columns
        {0, 4, 8}, {2, 4, 6}             // Diagonals  
    };

    for (const auto& condition : winConditions) {
        if (board[condition[0]] != ' ' &&
            board[condition[0]] == board[condition[1]] &&
            board[condition[1]] == board[condition[2]]) {
                return true;
        }
    }
    return false;
}

std::vector<char> updateBoard(std::vector<char> board, char playerInput, char shape) {
    std::vector<char> updatedBoard = board;
    if (playerInput == '1')
    {
        updatedBoard[0] = shape;
    }
    else if (playerInput == '2')
    {
        updatedBoard[1] = shape;
    }
    else if (playerInput == '3')
    {
        updatedBoard[2] = shape;
    }
    else if (playerInput == '4')
    {
        updatedBoard[3] = shape;
    }
    else if (playerInput == '5')
    {
        updatedBoard[4] = shape;
    }
    else if (playerInput == '6')
    {
        updatedBoard[5] = shape;
    }
    else if (playerInput == '7')
    {
        updatedBoard[6] = shape;
    }
    else if (playerInput == '8')
    {
        updatedBoard[7] = shape;
    }
    else
    {
        updatedBoard[8] = shape;
    }
    return updatedBoard;
}