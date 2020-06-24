#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "Player.h"

class Pole
{
public:
	static unsigned areas_quantity;
	unsigned o_id;

	virtual std::string getType() = 0;
	virtual std::string getName() = 0;
	virtual std::string information() = 0;
	virtual void react(Player* playerAt) = 0;


protected:
	std::string o_type;
	std::string o_name;


	Pole(std::string type, std::string name) : o_id(++areas_quantity), o_type(type), o_name(name)
	{
	}


private:


};

