#include "Player.h"
#include <iostream>

void Player::addCard(Card card) {
    hand.push_back(card);
}

int Player::getTotal() const {
    int total = 0;
    int ace_count = 0;

    for (const auto& c : hand) {
        total += c.getValue();
        if (c.rank == 1) ace_count++;
    }

    while (ace_count > 0 && total + 10 <= 21) {
        total += 10;
        ace_count--;
    }

    return total;
}

void Player::showHand(bool showAll) const {
    if (!showAll) {
        std::cout << "Hidden Card" << std::endl;
        if (hand.size() > 1) hand[1].print();
    }
    else {
        for (const auto& card : hand) {
            card.print();
        }
    }
    std::cout << "Total: " << getTotal() << std::endl;
}

bool Player::isBusted() const {
    return getTotal() > 21;
}

void Player::clearHand() {
    hand.clear();
}