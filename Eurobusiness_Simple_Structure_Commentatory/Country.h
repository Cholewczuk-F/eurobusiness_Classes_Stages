#pragma once
#include <string>
#include <vector>

#include "Player.h"

class Country
{
	static unsigned number;

	unsigned id;
	std::string name;
	std::vector<Pole*> areas;
	Player* owner;
	unsigned devCost;

	Country(std::string namePassed, std::vector<Pole*> areasPassed, unsigned devCost);


	unsigned getDevCost();

	void checkBoughtOut();
	Player* isBoughtOut();

};

