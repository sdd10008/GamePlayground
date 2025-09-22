#include "Card.h"
#include <iostream>

const std::string suit_names[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
const std::string rank_names[] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };

Card::Card(int r, Suit s) : rank(r), suit(s) {}

int Card::getValue() const {
    return (rank > 10) ? 10 : rank;
}

void Card::print() const {
    std::cout << rank_names[rank - 1] << " of " << suit_names[suit] << std::endl;
}