#pragma once
#include "Game.h"
#include <iostream>
#include <vector>
#include <memory>

class GameManager {
private:
	std::vector<std::unique_ptr<Game>> games;

public:
	void addGame(std::unique_ptr<Game> game) {
		games.push_back(std::move(game));
	}

	void showGameList() {
		std::cout << "===== GAME LIST =====\n";

		for (size_t i = 0; i < games.size(); i++) {
			std::cout << i << ": " << games[i]->getName() << std::endl;
		}
	}

	void run() {
		std::cout << "Welcom to Game Playground!" << std::endl;
		std::cout << "Please choose a game from list below." << std::endl;
		std::cout << "Press -1 to exit to Game." << std::endl;

		while (true) {
			// display game list.
			showGameList();

			// player input.
			int input_number;
			std::cin >> input_number;

			// press -1 then exit game.
			if (input_number == -1) {
				std::cout << "Thank you for playing!" << std::endl;
				break;
			}

			// start the selected game.
			if (input_number >= 0 && input_number < games.size()) {
				games[input_number]->startGame();
			}
			else {
				std::cout << "invalid number" << std::endl;
			}
		}
	}
};