#include "collision.hpp"

#include "board.hpp"

#include "pieces.hpp"



bool checkVerticalCollision()
{

    int nextY = pieceY + 1;
    // dy betet check el bottom bta3 elboard
    if(nextY >= ROWS)
    {
        return true;
    }



    // check lw feeh piece mwgoda fel grid
    if(grid[nextY][pieceX] == 1)
    {

        return true;

    }



    return false;

}



bool checkHorizontalCollision(int direction)
{
    int nextX = pieceX + direction;

    // Check left wall
    if(nextX < 0)
    {
        return true;
    }

    // Check right wall
    if(nextX >= COLUMNS)
    {
        return true;
    }

    // Check if another block exists
    if(grid[pieceY][nextX] == 1)
    {
        return true;
    }

    return false;
}