#pragma once
#include "Nieruchomosc.h"
#include "NieruchomoscOgraniczona.h"
#include "Player.h"

#include <string>
#include <vector>

class Player;

class Country
{
//friendship declarations
friend void Nieruchomosc::buyProperty(Player* playerAtProperty);
friend void NieruchomoscOgraniczona::buyProperty(Player* playerAtProperty);

friend void Nieruchomosc::sellProperty(Player* playerSoldTo, unsigned price);
friend void NieruchomoscOgraniczona::sellProperty(Player* playerSoldTo, unsigned price);


public:
	static unsigned number_of_countries;
	Country(std::string namePassed, std::vector<Pole*> areasPassed, unsigned devCost);

	//utility methods
	unsigned getId();
	std::string getName();
	unsigned getDevCost();
	Player* getOwner();


private:
	unsigned id;
	std::string name;
	//std::vector<Property*> areas;
	Player* owner;
	unsigned devCost;

	void setOwner(Player* owner);
	void checkBoughtOut();//friends with towns-properties'
};

