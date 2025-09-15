#include "TypingGame.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <atomic>
#include <random>

const std::vector<std::string> TypingGame::EASY_WORD_LIST = { "cat","dog","sun","run","hat","red","big","map","box","jump","fish","ball","book","tree","cake","bird","milk","blue","good","door" };
const std::vector<std::string> TypingGame::NORMAL_WORD_LIST = { "window","orange","flower","school","family","pretty","banana","yellow","travel","planet","garden","dinner","camera","turtle","market","summer","doctor","pocket","button","animal" };
const std::vector<std::string> TypingGame::HARD_WORD_LIST = { "schedule","psychology","astronaut","thermometer","electricity","dictionary","university","architecture","opportunity","complicated","refrigerator","environment","mathematics","transportation","championship","questionnaire","communication","advertisement","responsibility","entrepreneurship" };

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

	// start typing game
	std::cout << "Ready?" << std::endl;
	try {
		std::this_thread::sleep_for(std::chrono::seconds(3));
	}
	catch (const std::exception& e) {
		std::cerr << "Sleep interrupted:" << e.what() << std::endl;
		throw e;
	}
	std::cout << "Start!" << std::endl;
	totalCount = 0;
	collectScore = 0;
	std::random_device rd;
	std::mt19937 gen(rd());
	// thread allocatio
	std::thread t(&TypingGame::timer, this);

	// Repeat during the time limit
	while (!_timeUp) {
		std::shuffle(_current_word_list.begin(), _current_word_list.end(), gen);
		answerStr = _current_word_list[0];
		std::cout << answerStr << std::endl;
		std::cin >> inputStr;
		if (answerStr == inputStr) {
			std::cout << "collect" << std::endl;
			totalCount++;
			collectScore++;
		}
		else {
			std::cout << "incollect" << std::endl;
			totalCount++;
		}
	}

	// join a thread
	t.join();

	// TODO display result(typing accuracy)

	std::cout << "Thank you for playing." << std::endl;
}

void TypingGame::timer() {
	std::this_thread::sleep_for(std::chrono::seconds(LIMIT_TIME));
	_timeUp = true;
}