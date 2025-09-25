// GamePlayground.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GameManager.h"
#include "NumberGuessingGame.h"
#include "RockScissorsPaperGame.h"
#include "TypingGame.h"
#include "BlackJack.h"
#include "MazeExplorationGame.h"
#include "LifeGame.h"

int main()
{
	GameManager gm;
	gm.addGame(std::make_unique<NumberGuessingGame>());
	gm.addGame(std::make_unique<RockScissorsPaperGame>());
	gm.addGame(std::make_unique<TypingGame>());
	gm.addGame(std::make_unique<BlackJack>());
	gm.addGame(std::make_unique<MazeExplorationGame>());
	gm.addGame(std::make_unique<LifeGame>());
	gm.run();
}