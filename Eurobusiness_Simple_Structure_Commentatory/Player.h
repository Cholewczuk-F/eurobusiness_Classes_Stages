#pragma once
#include <vector>

class Player
{
public:
	static unsigned number_of_players;
	
	Player();
	void move(unsigned amount);

	//void makeOffer();
	//void getOffer(Player* seller, Pole* property, unsigned offerValue);
	//unsigned getPosition()

private:
	unsigned id;
	//std::string name; (theoritically? for player's recognition)
	unsigned position;
	int account;
};



