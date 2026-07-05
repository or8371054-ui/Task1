#include "pieces.hpp"
#include "board.hpp"

int pieceX;
int pieceY;



void createPiece()
{

    pieceX = COLUMNS / 2;  

    pieceY = 0;

}



void movePieceDown()
{

    pieceY++;

}

void movePieceLeft()
{
    pieceX--;
}


void movePieceRight()
{
    pieceX++;
}



void lockPieceToBoard()
{

    grid[pieceY][pieceX] = 1;

}