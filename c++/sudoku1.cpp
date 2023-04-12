#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <vector>

using namespace std;

// board dimensions
const int BOARD_SIZE = 9;
const int MIN_NUM = 1;
const int MAX_NUM = 9;

// 2D vector representing the Sudoku board
vector<vector<int>> board(BOARD_SIZE, vector<int>(BOARD_SIZE, 0));

// check if the given number can be placed in the given position on the board
bool canPlaceNumber(int number, int row, int col) {
  // check row and column
  for (int i = 0; i < BOARD_SIZE; i++) {
    if (board[row][i] == number || board[i][col] == number) {
      return false;
    }
  }

  // check current 3x3 grid
  int gridRow = row - row % 3;
  int gridCol = col - col % 3;
  for (int r = gridRow; r < gridRow + 3; r++) {
    for (int c = gridCol; c < gridCol + 3; c++) {
      if (board[r][c] == number) {
        return false;
      }
    }
  }

  // the number can be placed
  return true;
}

// generate a new Sudoku board with a unique solution
void generateBoard() {
  // fill the board with numbers
  for (int row = 0; row < BOARD_SIZE; row++) {
    for (int col = 0; col < BOARD_SIZE; col++) {
      // keep generating random numbers until we find one that fits
      int number;
      do {
        number = MIN_NUM + rand() % MAX_NUM;
      } while (!canPlaceNumber(number, row, col));
      board[row][col] = number;
    }
  }
}

// print the current state of the board to the console
void printBoard() {
  for (int row = 0; row < BOARD_SIZE; row++) {
    for (int col = 0; col < BOARD_SIZE; col++) {
      cout << board[row][col] << " ";
    }
    cout << endl;
  }
}

int main() {
  // seed the random number generator
  srand(time(0));

  // generate a new board
  generateBoard(); }
