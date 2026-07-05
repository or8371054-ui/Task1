#include "game.hpp"
#include "board.hpp"
#include "pieces.hpp"
#include "collision.hpp"
#include "input.hpp"

#include <cstdlib>
#include <thread>
#include <chrono>
#include <iostream>


using namespace std;

void clearScreen()
{

    system("cls");   // Windows


}


void startGame()
{

    initializeBoard();
    createPiece();

    bool game_running = true;



    while(game_running){
    

        clearScreen();
        handleInput();

        if(checkVerticalCollision())
        {

            lockPieceToBoard();
            clearFullLines();
            createPiece();

            // lw el piece el gdeda t2ilt fel grid, ye3ln el board mal2an
            if(grid[pieceY][pieceX] == 1)
            {
                game_running = false;
            }

        }
        else
        {

            movePieceDown();
        }

        drawBoard(pieceX, pieceY);



        std::this_thread::sleep_for(std::chrono::milliseconds(500));





    }

    cout << "Game Over" << endl;

}