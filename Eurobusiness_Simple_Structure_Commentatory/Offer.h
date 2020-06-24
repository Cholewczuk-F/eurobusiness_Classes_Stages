#pragma once
#include "Player.h"
//#include "Property.h"

struct Offer
{
	Player* seller;
	Player* buyer;
	//Property* property;
	unsigned price;
	bool status;
};

