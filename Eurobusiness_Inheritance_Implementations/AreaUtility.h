#ifndef __AREA_UTI_H_INCLUDED__
#define __AREA_UTI_H_INCLUDED__

class Area;

#pragma once
#include "Area.h"
#include "Player.h"
#include "Bank.h"
#include <string>

//type 0 of area - utility
//inherited: id, type, name
class AreaUtility : Area
{
public:

	//utility methods
	virtual unsigned getId();
	virtual std::string getType();
	virtual std::string getName();
	virtual std::string getInfo();
	virtual Player* interact(Player* playerAtProperty);


private:
	int value;

	AreaUtility(std::string type, std::string name, int valuePassed);
};

#endif // !__AREA_UTI_H_INCLUDED__