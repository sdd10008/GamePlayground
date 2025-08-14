#pragma once
#include <string>

class Game {
public:
	virtual ~Game() {};
	virtual std::string getName() const = 0;
	virtual void startGame() = 0;
};