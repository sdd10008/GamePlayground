#include "Deck.h"
#include <algorithm>
#include <random>
#include <ctime>

Deck::Deck() : currentIndex(0) {
    for (int r = 1; r <= 13; ++r) {
        for (int s = 0; s < 4; ++s) {
            cards.emplace_back(r, static_cast<Suit>(s));
        }
    }
    shuffle();
}

void Deck::shuffle() {
    std::mt19937 rng(static_cast<unsigned int>(std::time(nullptr)));
    std::shuffle(cards.begin(), cards.end(), rng);
    currentIndex = 0;
}

Card Deck::dealCard() {
    if (currentIndex >= cards.size()) {
        shuffle();
    }
    return cards[currentIndex++];
}