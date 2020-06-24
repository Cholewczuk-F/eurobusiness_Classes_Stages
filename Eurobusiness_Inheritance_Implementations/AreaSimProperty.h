#ifndef __AREA_SIM_H_INCLUDED__
#define __AREA_SIM_H_INCLUDED__

class Country;

#pragma once
#include "Area.h"
#include "Country.h"
#include "Player.h"
#include <vector>
#include <string>

//type 1 of area - predeveloped property
//attributes inherited: id, type, name
class AreaSimProperty : public Area
{
public:
	AreaSimProperty(std::string typePassed, std::string namePassed);

	AreaSimProperty(std::string namePassed, unsigned market_valuePassed, std::vector<unsigned>& pricesPassed, Country *countryPassed);


	//utility methods
	virtual unsigned getId();
	virtual std::string getType();
	virtual std::string getName();
	virtual std::string getInfo();
	virtual Player* interact(Player* playerAtProperty);

	//bool getmortgageState();
	//Player* getOwner(); ?

	void buyProperty(Player* playerAtProperty);
	void mortgageTGL(Player* authentication);


private:
	//unsigned countPayment();
	void sellProperty(Player* playerSoldTo, unsigned price);


	unsigned market_value; 
	std::vector<unsigned> dev_prices;
	Player* owner;
	Country* country;
	bool mortgage;
};

#endif // !__AREA_SIM_H_INCLUDED__