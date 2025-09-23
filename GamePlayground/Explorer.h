#ifndef EXPLORER_H
#define EXPLORER_H

class Explorer {
    int x, y;

public:
    Explorer(int startX, int startY);
    int getX() const;
    int getY() const;
    void move(char direction);
    void setPosition(int newX, int newY);
};

#endif