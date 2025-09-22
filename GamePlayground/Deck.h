#ifndef DECK_H
#define DECK_H

#include <vector>
#include "Card.h"

class Deck {
    std::vector<Card> cards;
    int currentIndex;

public:
    Deck();
    void shuffle();
    Card dealCard();
};

#endif // DECK_H