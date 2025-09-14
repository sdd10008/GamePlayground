#include "TypingGame.h"
#include <iostream>

void TypingGame::startGame() {
	std::cout << "Start Typing Game!" << std::endl;

	// select difficulty level
	while (true) {
		std::cout << "Please choose a difficulty level.1:easy 2:normal 3:hard" << std::endl;
		std::cin >> _difficulty_level;
		if (_difficulty_level == 1) {
			std::cout << "Choose easy mode." << std::endl;
			_current_word_list = EASY_WORD_LIST;
			break;
		}
		if (_difficulty_level == 2) {
			std::cout << "Choose normal mode" << std::endl;
			_current_word_list = NORMAL_WORD_LIST;
			break;
		}
		if (_difficulty_level == 3) {
			std::cout << "Choose hard mode" << std::endl;
			_current_word_list = HARD_WORD_LIST;
			break;
		}
		std::cout << "Invalid value" << std::endl;
	}

	// TODO start typing game

	// TODO start time measurement

	// TODO repeat for a limited time

	// TODO input typing

	// TODO check typo

	// TODO end time measurement

	// TODO display result(typing accuracy)

	std::cout << "Thank you for playing." << std::endl;
}