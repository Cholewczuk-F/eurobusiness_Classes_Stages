#pragma once
#include <string>

//type 0 of area - utility
class PoleUsluga
{
	unsigned id;
	std::string type;
	std::string name;

	int value;
	

	PoleUsluga(std::string name, int value);
	/*virtual std::string getType();
	virtual std::string getName();
	virtual std::string information();*/

	//std::string checkPlayer(Player* playerAtProperty)
};

