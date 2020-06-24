#pragma once
#include "Player.h"
#include "Country.h"

#include <string>


//type 1 of area - predeveloped property 
class NieruchomoscOgraniczona
{
public:
	NieruchomoscOgraniczona(std::string name, unsigned m_value, std::vector<unsigned>& prices, Country *countryPassed);

	//utility methods
	//std::string getType();
	//std::string getName();
	//std::string information();
	//unsigned getId();
	//bool getmortgageState();
	//Player* getOwner(); ?

	Player* checkOwnership(Player* playerAtProperty);
	void buyProperty(Player* playerAtProperty);
	void mortgageTGL(Player* authentication);


private:
	//unsigned countPayment();
	void sellProperty(Player* playerSoldTo, unsigned price); 

	unsigned id; //int. property of class
	std::string type;
	std::string name;
	unsigned market_value;
	std::vector<unsigned> dev_prices;
	Player* owner;
	Country* country;
	bool mortgage;
};