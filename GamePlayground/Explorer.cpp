#include "Explorer.h"

Explorer::Explorer(int startX, int startY) : x(startX), y(startY) {}

int Explorer::getX() const { return x; }
int Explorer::getY() const { return y; }

void Explorer::setPosition(int newX, int newY) {
    x = newX;
    y = newY;
}

void Explorer::move(char direction) {
    switch (direction) {
    case 'w': y--; break;
    case 's': y++; break;
    case 'a': x--; break;
    case 'd': x++; break;
    }
}