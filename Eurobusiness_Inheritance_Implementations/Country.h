#ifndef __COUNTRY_H_INCLUDED__
#define __COUNTRY_H_INCLUDED__

#pragma once
#include "Player.h"
#include "Area.h"
#include "AreaSimProperty.h"
#include "AreaAdvProperty.h"
#include <string>
#include <vector>


class Country
{
//friendship declarations
friend void AreaAdvProperty::buyProperty(Player* playerAtProperty);
friend void AreaSimProperty::buyProperty(Player* playerAtProperty);

friend void AreaAdvProperty::sellProperty(Player* playerSoldTo, unsigned price);
friend void AreaSimProperty::sellProperty(Player* playerSoldTo, unsigned price);


public:
	static unsigned number_of_countries;
	Country(std::string namePassed, std::vector<Area*> areasPassed, unsigned devCostPassed);

	//utility methods
	unsigned getId();
	std::string getName();
	unsigned getDevCost();
	Player* getOwner();


private:
	unsigned id;
	std::string name;
	std::vector<Area*> areas;
	Player* owner;
	unsigned devCost;

	void setOwner(Player* owner);
	void checkBoughtOut();
};

#endif // !__COUNTRY_H_INCLUDED__