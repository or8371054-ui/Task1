#ifndef BOARD_HPP
#define BOARD_HPP


const int ROWS = 10;
const int COLUMNS = 5;


extern int grid[ROWS][COLUMNS];
extern int score;



void initializeBoard();
void drawBoard(int pieceX, int pieceY);
void clearFullLines();



#endif