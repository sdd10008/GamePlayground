#pragma once
#include "Game.h"
#include <string>
class RockScissorsPaperGame :
    public Game
{
public:
    std::string getName() const override {
        return "Rock Scissors Paper Game";
    }

    void startGame() override;

    // TODO: define enum

    // TODO: define variable
};

