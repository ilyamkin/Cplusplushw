#ifndef GAME_H
#define GAME_H
#include "player.h"
#include "deck.h"
#include <vector>

class Game {
protected:
	Deck deck;
	std::vector<Player> players;
	int countPlayers;
	//virtual void initGame(int) = 0;
	//virtual void addPlayer(Player) = 0;
	std::vector<Card> lookCards(Player &) const;
	void addMoney(Player &, int);
	int money(Player &);
	void kickPlayer(Player&);
	int stepPlayer(Player&, int);
	int bid(Player &);
public:
	Game() = default;
	virtual void runGame(std::vector<Player>) = 0;
};

#endif GAME_H