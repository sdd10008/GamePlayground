#include "RockScissorsPaperGame.h"
#pragma once
#include <iostream>
#include <random>

void RockScissorsPaperGame::startGame() {
	std::cout << "Welcome to Rock-Scissors-Paper Game!" << std::endl;

	// generate random number
	std::random_device seed_gen;
	std::mt19937 engine(seed_gen());
	std::uniform_int_distribution<> distribution(_MIN_RANDOM_NUMBER, _MAX_RANDOM_NUMBER);

	// repeat until someone wins 3 times
	while (_player_win_count < _WINNING_CONDITION && _npc_win_cout < _WINNING_CONDITION) {
		std::int16_t random_num = distribution(engine);
		STATUS npc = static_cast<STATUS>(random_num);

		// player input number
		while (true) {
			std::cout << "Please input number 0:ROCK 1:SCISSORS 2:PAPER" << std::endl;
			std::cin >> _input_number;
			if (_input_number == 0 || _input_number == 1 || _input_number || 2) break;
		}
		STATUS player = static_cast<STATUS>(_input_number);

		// TODO rock scissors paper judgement

		// TODO display the ongoing result
	}
	// TODO display the final result(winner and player winning rate)

	std::cout << "Thank you for playing the Rock-Scissors-Paper Game!" << std::endl;
}