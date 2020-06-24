#pragma once
#include "Player.h"
#include "Country.h"

#include <string>


//type 1 of area - predeveloped property 
class NieruchomoscOgraniczona
{
	NieruchomoscOgraniczona(std::string name, unsigned m_value, std::vector<unsigned>& prices, Country* krajPassed);

	//std::string getType();
	//std::string getName();
	//std::string information();

	//bool getmortgageState();
	//Player* getOwner();

	//Player* checkOwnership(Player* playerAtProperty);
	//bool buyProperty(Player* playerAtProperty);
	//bool sellProperty(Player* playerSoldTo, unsigned price);
	//void mortgageTGL();
	//unsigned countPayment()


	unsigned id; //int. property of class

	std::string type;
	std::string name;
	unsigned market_value;
	std::vector<unsigned> dev_prices;
	Player* owner;
	Country* country;
	bool mortgage;
};

