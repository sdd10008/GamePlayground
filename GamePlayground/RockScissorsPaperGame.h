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
    static constexpr int _MIN_RANDOM_NUMBER = 0;
    static constexpr int _MAX_RANDOM_NUMBER = 2;
    static constexpr int _WINNING_CONDITION = 3;
    
    int _player_win_count = 0;
    int _npc_win_count = 0;
    int _input_number;
};

