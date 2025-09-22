#pragma once
#include "Game.h"
class MazeExplorationGame :
    public Game
{
public:
    std::string getName() const override {
        return "MazeExplorationGame";
    }

    void startGame() override;
};

