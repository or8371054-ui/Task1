# Console Tetris Game (C++)

A simple **console-based Tetris game** developed in **C++**. The project demonstrates the use of modular programming, basic game development concepts, collision detection, and console rendering.

---

## Features

- Console-based gameplay
- Real-time keyboard input
- Collision detection
- Line clearing
- Score tracking
- Game Over detection
- Modular project structure

---

## Project Structure

```
.
├── main.cpp
├── board.cpp
├── game.cpp
├── pieces.cpp
├── collision.cpp
├── input.cpp
├── include/
│   ├── board.hpp
│   ├── game.hpp
│   ├── pieces.hpp
│   ├── collision.hpp
│   └── input.hpp
└── README.md
```

---

## File Responsibilities

### main.cpp
- Entry point of the application.
- Starts the game by calling the main game function.

### game.cpp
Responsible for the main game loop:
- Initializes the game board.
- Creates new Tetris pieces.
- Handles the game flow.
- Updates game state.
- Renders the board.
- Ends the game when no more pieces can be spawned.

### board.cpp
Responsible for board management:
- Initializes the board.
- Draws the board.
- Stores fixed blocks.
- Clears completed rows.
- Updates the player's score.

### pieces.cpp
Responsible for:
- Creating Tetris pieces.
- Moving pieces.
- Rotating pieces.
- Managing the current active piece.

### collision.cpp
Handles collision detection:
- Wall collisions.
- Floor collisions.
- Collision with existing blocks.

### input.cpp
Processes keyboard input:
- Move Left
- Move Right
- Move Down
- Rotate Piece

---

## How the Game Works

1. Initialize the game board.
2. Spawn a new Tetris piece.
3. Enter the main game loop.
4. Read keyboard input.
5. Move or rotate the current piece.
6. Check for collisions.
7. Lock the piece when it reaches the bottom.
8. Clear completed rows.
9. Update the score.
10. Spawn a new piece.
11. Repeat until no space is available for a new piece.

---

## Technologies Used

- C++
- Object-Oriented Programming (OOP)
- Modular Programming
- Arrays
- Functions
- Console Graphics

---

## Build

Compile the project using **g++**:

```bash
g++ main.cpp board.cpp game.cpp pieces.cpp collision.cpp input.cpp -o tetris
```

If your source files are inside a **src** folder:

```bash
g++ main.cpp src/board.cpp src/game.cpp src/pieces.cpp src/collision.cpp src/input.cpp -Iinclude -o tetris
```

---

## Run

Windows

```bash
.\tetris.exe
```

Linux / macOS

```bash
./tetris
```

---

## Learning Outcomes

This project helped me practice:

- Modular software design
- Game loop implementation
- Collision detection algorithms
- Keyboard input handling
- Console rendering
- Problem solving using C++

---

## Future Improvements

- Piece rotation optimization
- Levels and increasing speed
- Save high scores
- Pause and resume
- Colored console graphics
- Preview next piece
- Hold piece feature

---

