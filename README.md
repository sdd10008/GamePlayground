# GamePlayground
I’m practicing C++ by building a variety of games in a step-by-step learning progression. Each stage introduces new concepts and grows in complexity—from familiarizing yourself with basic syntax to designing extensible systems, creating 2D graphics-based games, and exploring more advanced topics like AI and networking. The roadmap for my journey is as follows:

# 🟢 STEP 1: Simple Console (CUI) Games — Fundamental Syntax

## Number Guessing Game

**Overview:**  
Generate a random number between 1 and 100. The user guesses the number, with hints of "too high" or "too low". Upon guessing correctly, the number of attempts is displayed.

**Key Points:**
- Use `std::mt19937` for random number generation
- Employ `while` loops and `if` statements

**Extensions:**
- Allow difficulty settings (custom range)
- Add a maximum number of attempts

---

## Rock-Paper-Scissors

**Overview:**  
The player and CPU each choose Rock, Paper, or Scissors. The outcome (win/lose/tie) is displayed.

**Key Points:**
- Manage choices with an `enum`
- Use a `switch` statement for determining the winner

**Extensions:**
- Display win-rate statistics
- Create a best-of-three match mode

---

## Typing Game

**Overview:**  
Present the player with random words. Score +1 for correct input within a time limit.

**Key Points:**
- Manage words using `std::vector<std::string>`
- Measure time with `<chrono>`

**Extensions:**
- Show typing accuracy
- Adjust word length based on difficulty

---

# 🟡 STEP 2: More Complex Console (CUI) Games — Classes & STL

## Blackjack

**Overview:**  
Shuffle a deck of 52 cards. Player and dealer draw cards in turn. Closest to 21 without going over wins.

**Key Points:**
- Use classes such as `Card`, `Deck`, and `Player`
- Manage the deck with `std::vector`

**Extensions:**
- Support multiple players
- Introduce betting mechanics

---

## Maze Exploration Game

**Overview:**  
Navigate a 2D map from start to goal using WASD movement. Reaching the goal completes the game.

**Key Points:**
- Manage the map using `std::vector<std::string>`
- Update game state based on user input

**Extensions:**
- Generate random mazes
- Add traps or obstacles

---

## Game of Life (Cellular Automaton)

**Overview:**  
A 20×20 grid of cells that evolve across turns based on neighboring cell states.

**Key Points:**
- Update using a 2D array
- Evaluate the eight surrounding cells for each update

**Extensions:**
- Support variable map sizes
- Allow loading initial patterns

---

# 🟠 STEP 3: Text-based RPG — Class Design & Extensibility

## RPG Battle

**Overview:**  
Player vs. enemy battle. Choose actions like Attack, Defend, or Skill until one’s HP reaches zero.

**Key Points:**
- Use a base class `Character` with fields like HP and attack power
- Derive `Player` and `Enemy` from `Character`

**Extensions:**
- Add various skills
- Implement leveling and experience

---

## RPG Inventory System

**Overview:**  
Display a list of items. Enable use of healing items or offensive items.

**Key Points:**
- Manage items with `std::map<std::string, int>`

**Extensions:**
- Add a shop system
- Introduce dungeon exploration elements

---

# 🔵 STEP 4: 2D Graphics with SDL2/SFML

## Display an Image with SDL2

**Overview:**  
Open a window and display an image. Press ESC to close.

**Key Points:**
- Learn basic SDL initialization and rendering

**Extensions:**
- Enable character movement via keyboard input

---

## Tetris-like Game

**Overview:**  
Falling blocks, collision detection, and line clearing.

**Key Points:**
- Manage the board as a 2D array
- Handle rendering and input with SDL2

**Extensions:**
- Add scoring and level progression

---

# 🟣 STEP 5: Advanced — AI & Networking

## Roguelike Dungeon

**Overview:**  
Randomly generated dungeon maps with enemies and item placement.

**Key Points:**
- Implement maze generation algorithms

**Extensions:**
- Explore multiple dungeon floors

---

## AI Opponent (Othello or Mini Chess)

**Overview:**  
Player vs CPU using the minimax algorithm to decide moves.

**Key Points:**
- Build game state evaluation functions

**Extensions:**
- Add alpha-beta pruning for better AI performance

---

## Simple Online Multiplayer

**Overview:**  
Client-server interaction over TCP or UDP for basic game exchanges.

**Key Points:**
- Use socket programming for communication

**Extensions:**
- Support multiple players across networked sessions

---

This roadmap reflects my progressive learning path—each step builds on the last, helping me deepen my understanding of C++ while creating increasingly complex games.I would appreciate your feedback.
