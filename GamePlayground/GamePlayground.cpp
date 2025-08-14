// GamePlayground.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GameManager.h"
#include "NumberGuessingGame.h"

int main()
{
	GameManager gm;
	gm.addGame(std::make_unique<NumberGuessingGame>());
	gm.run();
}