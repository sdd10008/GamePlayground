#include "MazeExplorationGame.h"
#include <iostream>

MazeExplorationGame::MazeExplorationGame() : explorer(1, 1), running(true) {}

void MazeExplorationGame::startGame() {
	std::cout << "Start Maze Exploration Game!" << std::endl;

    while (running) {
        system("cls");
        map.display(explorer.getX(), explorer.getY());

        if (map.isGoal(explorer.getX(), explorer.getY())) {
            std::cout << "\nYou reached the goal! Congratulations!\n";
            break;
        }

        std::cout << "\nMove (WASD): ";
        char input;
        std::cin >> input;

        int newX = explorer.getX();
        int newY = explorer.getY();

        switch (input) {
        case 'w': newY--; break;
        case 's': newY++; break;
        case 'a': newX--; break;
        case 'd': newX++; break;
        case 'q': running = false; continue;
        default: continue;
        }

        if (!map.isWall(newX, newY)) {
            explorer.setPosition(newX, newY);
        }
    }

	std::cout << "Thank you for playing." << std::endl;
}