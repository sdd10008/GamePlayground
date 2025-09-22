#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "Card.h"

class Player {
    std::vector<Card> hand;

public:
    void addCard(Card card);
    int getTotal() const;
    void showHand(bool showAll = true) const;
    bool isBusted() const;
    void clearHand();
};

#endif // PLAYER_H