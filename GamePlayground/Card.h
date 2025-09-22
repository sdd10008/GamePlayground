#ifndef CARD_H
#define CARD_H

#include <string>

enum Suit { HEARTS, DIAMONDS, CLUBS, SPADES };

class Card {
public:
    int rank;
    Suit suit;

    Card(int r, Suit s);
    int getValue() const;
    void print() const;
};

#endif // CARD_H