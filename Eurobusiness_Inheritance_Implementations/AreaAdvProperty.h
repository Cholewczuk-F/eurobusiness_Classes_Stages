#ifndef __AREA_ADV_H_INCLUDED__
#define __AREA_ADV_H_INCLUDED__

class AreaSimProperty;

#pragma once
#include "AreaSimProperty.h"
#include "Country.h"
#include "Player.h"
#include "Bank.h"
#include <string>
#include <vector>

class Country;

//type 2 of area - property
//inherited 
class AreaAdvProperty : AreaSimProperty
{
public:
	AreaAdvProperty(std::string name, unsigned market_valuePassed, std::vector<unsigned>& pricesPassed, Country* countryPassed);

	//utility methods
	virtual unsigned getId();
	virtual std::string getType();
	virtual std::string getName();
	virtual std::string getInfo();
	virtual Player* interact(Player* playerAtProperty);

	//unsigned getDevState();
	//bool getMortgageState();

	void buyProperty(Player* playerAtProperty);
	void mortgageTGL(Player* authentication);
	void develop(Player* authentication);
	void downgrade(Player* authentication);

private:
	//unsigned countPayment();
	void sellProperty(Player* playerSoldTo, unsigned price);


	unsigned market_value;
	unsigned dev_state;
	std::vector<unsigned> dev_prices;
	Player* owner;
	Country* country;
	bool mortgage;
};

#endif // !__AREA_ADV_H_INCLUDED__