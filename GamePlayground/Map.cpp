#include "Map.h"
#include <iostream>

Map::Map() {
    grid = {
        "##########",
        "#S     #G#",
        "# ### ## #",
        "#   #    #",
        "##########"
    };
}

void Map::display(int playerX, int playerY) const {
    for (int y = 0; y < grid.size(); ++y) {
        for (int x = 0; x < grid[y].size(); ++x) {
            if (x == playerX && y == playerY)
                std::cout << '@';
            else
                std::cout << grid[y][x];
        }
        std::cout << '\n';
    }
}

char Map::getTile(int x, int y) const {
    if (y < 0 || y >= getHeight() || x < 0 || x >= getWidth()) return '#';
    return grid[y][x];
}

bool Map::isWall(int x, int y) const {
    return getTile(x, y) == '#';
}

bool Map::isGoal(int x, int y) const {
    return getTile(x, y) == 'G';
}

int Map::getWidth() const {
    return grid[0].size();
}

int Map::getHeight() const {
    return grid.size();
}