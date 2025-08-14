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

private:
    int _min_random_number = 0;
    int _max_random_number;
    int _difficulty_level;
    int _continue_count = 10;
    int _expect_number;
    char _continue_input;
};

