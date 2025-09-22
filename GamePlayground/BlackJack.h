#pragma once
#include "Game.h"
class BlackJack :
    public Game
{
public:
    std::string getName() const override {
        return "BlackJack";
    }

    void startGame() override;
};

