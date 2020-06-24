#ifndef __AREA_H_INCLUDED__
#define __AREA_H_INCLUDED__

#pragma once
#include <string>
#include "Player.h"

class Area
{
public:
	static unsigned areas_amount;
	Area(std::string typePassed, std::string namePassed) : id(++areas_amount), type(typePassed), name(namePassed)
	{}



protected:
	unsigned id;
	std::string type;
	std::string name;

	//utility methods
	virtual unsigned getId() = 0;
	virtual std::string getType() = 0;
	virtual std::string getName() = 0;
	virtual std::string getInfo() = 0; 
	virtual Player* interact(Player* playerAtProperty) = 0;

};

#endif // !__AREA_H_INCLUDED__