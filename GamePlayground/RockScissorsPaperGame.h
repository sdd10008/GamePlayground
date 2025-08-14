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

private:
    enum class STATUS : int {
        ROCK,
        SCISSORS,
        PAPER,
    };

    // TODO: define variable
};

