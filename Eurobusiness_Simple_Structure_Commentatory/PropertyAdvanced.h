#pragma once
#include "Player.h"
#include "Country.h"

#include<string>
#include <vector>


//nieruchomosc bedzie dziedziczyc od klasy abstrakcyjnej Pole
//klasy dziedziczone: getType, getName, information
//atrybuty dziedziczone: id, type, name

//w idealnej sytuacji dziedziczenie wyglądałoby
//pole -> nieruchomoscOgraniczona -> nieruchomosc

class Nieruchomosc
{	
	Nieruchomosc(std::string name, unsigned m_value, std::vector<unsigned>& prices, Country* krajPassed);

	//std::string getType();
	//std::string getName();
	//std::string information();

	//unsigned getDevState();
	//bool getMortgageState();
	//Player* getOwner();
	//unsigned countPayment()

	//Player* checkOwnership(Player* playerAtProperty);

	//bool sellProperty(Player* playerSoldTo, unsigned price);
	//bool buyProperty(Player* playerAtProperty);
	//void develop(Player* playerAtProperty);
	//void downgrade(Player* playerAtProperty);
	//void mortgageTGL();

	unsigned id; //int. property of class

	std::string type;
	std::string name;
	unsigned market_value;
	unsigned dev_state;
	std::vector<unsigned> dev_prices;
	Player* owner;
	Country* country;
	bool mortgage;

};

