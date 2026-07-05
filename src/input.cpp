#include "input.hpp"
#include "pieces.hpp"
#include "collision.hpp"

#include <iostream>
#include <windows.h>
using namespace std;

void handleInput()
{
    
          // Move Left
      if(GetAsyncKeyState('A') & 0x8000)
    {
        if(!checkHorizontalCollision(-1))
        {
            movePieceLeft();
        }
    }

     // Move Right
    if(GetAsyncKeyState('D') & 0x8000)
    {
        if(!checkHorizontalCollision(1))
        {
            movePieceRight();
        }
    }
}