#pragma once
#include "Game.h"
#include <string>
class NumberGuessingGame :
    public Game
{
public:
    std::string getName() const override {
        return "Number Guessing Game";
    }

    void startGame() override;
};

