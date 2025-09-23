#pragma once
#include "Game.h"
#include <string>
class LifeGame :
    public Game
{
    std::string getName() const override{
        return "Life Game";
    }

    void startGame() override;
};

