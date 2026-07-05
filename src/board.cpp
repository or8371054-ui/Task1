#include "board.hpp"

#include <iostream>

using namespace std;

int grid[ROWS][COLUMNS];
int score = 0;



void initializeBoard()
{


    for(int i = 0; i < ROWS; i++)
    {

        for(int j = 0; j < COLUMNS; j++)
        {

            grid[i][j] = 0;

        }

    }



}




void drawBoard(int pieceX, int pieceY)
{


    for(int i = 0; i < ROWS; i++)
    {


       cout << "|";


        for(int j = 0; j < COLUMNS; j++)
        {

              // Draw the falling piece
            if(i == pieceY && j == pieceX)
            {
               cout << " #";
            }

            else if(grid[i][j] == 1)
            {

                cout << " #";

            }
            else
            {

                 cout << "  ";

            }


        }


       cout <<"|"<<endl;


    }



    for(int i = 0; i < COLUMNS * 2 + 1; i++)
    {

       cout << "-";

    }
      cout << endl;


    cout << "Score: " << score << endl;


}




bool isRowFull(int row)
{

    for(int j = 0; j < COLUMNS; j++)
    {

        if(grid[row][j] == 0)
        {
            return false;
        }

    }

    return true;

}


void dropRowsDown(int fromRow)
{

    // shift kol row fo2 el line el mal2ana kol row waked lel taht
    for(int k = fromRow; k > 0; k--)
    {

        for(int j = 0; j < COLUMNS; j++)
        {
            grid[k][j] = grid[k - 1][j];
        }

    }

    for(int j = 0; j < COLUMNS; j++)
    {
        grid[0][j] = 0;
    }

}


void clearFullLines()
{

    for(int i = 0; i < ROWS; i++)
    {

        if(isRowFull(i))
        {

            dropRowsDown(i);

            score++;   // hasalt point 3ala kol line btetmsah

        }

    }

}