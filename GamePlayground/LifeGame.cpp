#include "LifeGame.h"
#include <iostream>
#include <windows.h> // for Sleep on Windows

#include "GameOfLife.h"

const int ROWS = 20;
const int COLS = 20;
const int GENERATIONS = 50;

void LifeGame::startGame() {
	std::cout << "Start Life Game!" << std::endl;
    GameOfLife game(ROWS, COLS);
    game.initializeGrid(PULSAR);

    for (int i = 0; i < GENERATIONS; ++i) {
        // 画面クリア（Windows）
         system("cls");

        std::cout << "Generation: " << game.getGeneration() << std::endl;
        game.printGrid();
        game.updateGrid();

        Sleep(100);
    }
	std::cout << "Thank you for playing." << std::endl;
}