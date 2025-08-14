#include "NumberGuessingGame.h"

#pragma once
#include <iostream>
#include <random>
#include <cctype>

void NumberGuessingGame::startGame() {
	std::cout << "Start Number Guessing Game!" << std::endl;

	// generate random number
	std::random_device seed_gen;
	std::mt19937 engine(seed_gen());
	while (true) {
		while (true) {
			std::cout << "Please choose a difficulty level.1:easy 2:normal 3:hard" << std::endl;
			std::cin >> _difficulty_level;
			if (_difficulty_level == 1) {
				std::cout << "Choose easy mode." << std::endl;
				_max_random_number = 10;
				break;
			}

			if (_difficulty_level == 2) {
				std::cout << "Choose normal mode." << std::endl;
				_max_random_number = 100;
				break;
			}

			if (_difficulty_level == 3) {
				std::cout << "Choose hard mode." << std::endl;
				_max_random_number = 1000;
				break;
			}

			std::cout << "Invalid number" << std::endl;
		}

		std::uniform_int_distribution<> distribution(_min_random_number, _max_random_number);
		std::int32_t correct_number = distribution(engine);

		std::cout << "Please input number between " << _min_random_number << "-" << _max_random_number << std::endl;
		while (true) {
			std::cin >> _expect_number;

			if (_expect_number == correct_number) break;
			--_continue_count;
			if (_continue_count < 0) break;

			std::cout << "incorrect" << std::endl;
			std::cout << "You have " << _continue_count << "\tattempts remaining." << std::endl;

			// HINT message
			if (_expect_number > correct_number) {
				std::cout << "HINT: input number bigger than collect number" << std::endl;
			}
			else {
				std::cout << "HINT: input number smaller than collect number" << std::endl;
			}
		}

		if (_continue_count >= 0) std::cout << "Excellent!!" << std::endl;
		else std::cout << "Fault" << std::endl;
		_continue_count = 10;

		while (true) {
			std::cout << "Continue Game?(y/n)" << std::endl;
			std::cin >> _continue_input;
			_continue_input = std::tolower(_continue_input);
			if (_continue_input == 'y' || _continue_input == 'n') break;
		}

		if (_continue_input == 'n') break;
	}

	std::cout << "Thank you for playing." << std::endl;
}