#include "BlackJack.h"
#include "Deck.h"
#include "Player.h"
#include <iostream>

void BlackJack::startGame() {
	std::cout << "Start Black Jack Game!" << std::endl;
    Deck deck;
    Player player;
    Player dealer;

    player.addCard(deck.dealCard());
    dealer.addCard(deck.dealCard());
    player.addCard(deck.dealCard());
    dealer.addCard(deck.dealCard());

    std::cout << "\n--- Dealer's Hand ---\n";
    dealer.showHand(false);

    std::cout << "\n--- Your Hand ---\n";
    player.showHand();

    while (true) {
        if (player.isBusted()) {
            std::cout << "You busted! Dealer wins.\n";
            return;
        }

        std::cout << "\nHit or Stand? (h/s): ";
        char choice;
        std::cin >> choice;
        if (choice == 'h') {
            player.addCard(deck.dealCard());
            std::cout << "\n--- Your Hand ---\n";
            player.showHand();
        }
        else {
            break;
        }
    }

    std::cout << "\n--- Dealer's Turn ---\n";
    dealer.showHand();
    while (dealer.getTotal() < 17) {
        std::cout << "Dealer hits...\n";
        dealer.addCard(deck.dealCard());
        dealer.showHand();
    }

    if (dealer.isBusted()) {
        std::cout << "Dealer busted! You win.\n";
    }
    else {
        int playerTotal = player.getTotal();
        int dealerTotal = dealer.getTotal();

        std::cout << "\n--- Result ---\n";
        if (playerTotal > dealerTotal) {
            std::cout << "You win!\n";
        }
        else if (playerTotal < dealerTotal) {
            std::cout << "Dealer wins.\n";
        }
        else {
            std::cout << "Push! (Draw)\n";
        }
    }

	std::cout << "Thank you for playing." << std::endl;
}