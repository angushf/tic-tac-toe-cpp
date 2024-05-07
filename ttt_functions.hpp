#include <vector>

void printBoard(std::vector<char> board);
void printWelcome();
bool win(std::vector<char> board);
std::vector<char> updateBoard(std::vector<char> board, char playerInput, char shape);