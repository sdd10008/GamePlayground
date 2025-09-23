#ifndef MAP_H
#define MAP_H

#include <vector>
#include <string>

class Map {
    std::vector<std::string> grid;

public:
    Map();
    void display(int playerX, int playerY) const;
    char getTile(int x, int y) const;
    bool isWall(int x, int y) const;
    bool isGoal(int x, int y) const;
    int getWidth() const;
    int getHeight() const;
};

#endif