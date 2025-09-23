#ifndef MAZE_EXPLORATION_GAME_H
#define MAZE_EXPLORATION_GAME_H


#include "Map.h"
#include "Explorer.h"
#include "Game.h"

class MazeExplorationGame :
    public Game
{
    Map map;
    Explorer explorer;
    bool running;

public:
    MazeExplorationGame();
    std::string getName() const override {
        return "MazeExplorationGame";
    }

    void startGame() override;
};

#endif