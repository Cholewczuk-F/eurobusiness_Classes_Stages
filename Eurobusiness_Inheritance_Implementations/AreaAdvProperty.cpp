#include "AreaAdvProperty.h"


AreaAdvProperty::AreaAdvProperty(std::string namePassed, unsigned market_valuePassed, std::vector<unsigned>& pricesPassed, Country* countryPassed) : AreaSimProperty("AreaAdvProperty", namePassed)
{
	market_value = market_valuePassed;
	dev_prices = pricesPassed;
	country = countryPassed;
	mortgage = false;
	owner = NULL;
	dev_state = 0;
}

unsigned AreaAdvProperty::getId()
{
	return id;
}

std::string AreaAdvProperty::getType()
{
	return type;
}

std::string AreaAdvProperty::getName()
{
	return name;
}

std::string AreaAdvProperty::getInfo()
{
	return "finish1";
}
//	std::string info = "ID:" + std::to_string(id)
//		+ " Type:" + type
//		+ " Name:" + name
//		+ " Price:" + std::to_string(market_value)
//		+ " Dev state:" + std::to_string(dev_state);
//	for(int i = 0; i < dev_prices.size(); ++i)
//	{
//		info += " Cost " + std::to_string(i);
//		info += ":" + std::to_string(dev_prices[i]);
//	}
//	info += " \n";
//
//	return info;

//unsigned getDevState();
//returns development state of property

//bool getMortgageState()
//returns state of mortgage

//Player* getOwner()
//returns owner of property


//unsigned countPayment()
//returns paymentValue counted on basis:
//- does owner have entire country
//- development state of property

Player* AreaAdvProperty::interact(Player* playerAtProperty)
{
	//Bank::
}
//if property has no owner, returns nullptr
//if it isin't under mortgage it orders the bank to acquirePayment from player
//payment will be count in countPayment
//if playerAtProperty is the owner returns pointer to owner


void AreaAdvProperty::buyProperty(Player* playerAtProperty)
{
//	Bank::acquirePayment(playerAtProperty, market_value);
	//country->checkBoughtOut();
}
//passes bank order to acquire payment from player
//if payment returns true, meaning he has enough money, sets player as owner,
//if returns false, displays message to player he hasn't got funds and returns


//these rely on fact that if player is the owner and mortgageState() returns false:

void AreaAdvProperty::develop(Player* authentication)
{
	//Bank::acquirePayment
}
	//if there are houses avaible, it orders owner to pay price of one - taken from country
	//if true from pay(), increments dev_state, decrements global no_houses

void AreaAdvProperty::downgrade(Player* authentication)
{
	//Bank::acquirePayment
}
	//if dev_state > 0, orders bank to payout price of one - taken from country - to owner, then

void AreaAdvProperty::mortgageTGL(Player* authentication)
{
	//Bank::acquirePayment;
	//Bank::grantPayment;
}
	//every move owner has opportunity to either take mortgage on property or pay it back
	//if mortgage is false, orders bank to payout 1/2 of market_value to player and turns true
	//else orders bank to acquirePayment from player and it it accomplishes turns mortgage -> false


void AreaAdvProperty::sellProperty(Player* playerSoldTo, unsigned price)
{
	//Bank::moneyTransfer(owner, playerSoldTo, price);
	//country->checkBoughtOut();
}
//passes bank order to acquire payment of 'price' from playerSoldTo to currentOwner by moneyTransfer
//if payment accomplishes: sets playerSoldTo as owner, returns true
//else false