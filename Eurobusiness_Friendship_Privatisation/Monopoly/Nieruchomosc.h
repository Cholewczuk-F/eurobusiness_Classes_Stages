#pragma once
#include<string>
#include <vector>
#include "Pole.h"
#include "Player.h"
#include "Country.h"

//type 2 of area - property
class Nieruchomosc
{
public:
	Nieruchomosc(std::string name, unsigned m_value, std::vector<unsigned>& prices, Country* krajPassed);

	//std::string getType();
	//std::string getName();
	//std::string information();
	//unsigned getDevState();
	//bool getMortgageState();

	Player* checkOwnership(Player* playerAtProperty);
	void buyProperty(Player* playerAtProperty);
	void mortgageTGL(Player* authentication);
	void develop(Player* authentication);
	void downgrade(Player* authentication);

private:
	void sellProperty(Player* playerSoldTo, unsigned price);

	//unsigned countPayment();

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

