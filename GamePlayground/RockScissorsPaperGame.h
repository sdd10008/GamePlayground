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
    static constexpr int MIN_RANDOM_NUMBER = 0;
    static constexpr int MAX_RANDOM_NUMBER = 2;
};

