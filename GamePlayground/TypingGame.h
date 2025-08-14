#pragma once
#include "Game.h"
#include <string>
class TypingGame :
    public Game
{
public:
    std::string getName() const override {
        return "Typing Game";
    }

    void startGame() override;
};

