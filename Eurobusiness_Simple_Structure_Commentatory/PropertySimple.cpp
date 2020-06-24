#include "NieruchomoscOgraniczona.h"
#include "Player.h"
#include "Country.h"

#include <string>
#include <vector>

//type - 1 - simple property
//unsigned id
//string o_type
//string o_name
//unsigned market_value
//Player* owner

NieruchomoscOgraniczona::NieruchomoscOgraniczona(std::string namePassed, unsigned m_value, std::vector<unsigned>& prices, Country* krajPassed)
{
	//id++;
	type = "NieruchomoscOgraniczona";
	this->name = namePassed;
	
	market_value = m_value;
	dev_prices = prices;
	owner = NULL;
	mortgage = false;
	country = krajPassed;
}

/*std::string nieruchomoscograniczona::gettype()
{
	return type;
}*/

//std::string NieruchomoscOgraniczona::getName()
//{
//	return name;
//}

//information
//std::string NieruchomoscOgraniczona::information()
//{
//	std::string info = "ID:" + std::to_string(id);
//	info += " Type:" + type
//		+ " Name:" + name
//		+ " Price:" + std::to_string(market_value);
//
//	for (int i = 0; i < dev_prices.size(); ++i)
//	{
//		info += " Cost " + std::to_string(i);
//		info += ":" + std::to_string(dev_prices[i]);
//	}
//	info += " \n";
//
//	return info;
//}


//bool getMortgageState()
//returns state of mortgage

//Player* getOwner()
//returns owner of property

//unsigned countPayment()
//returns paymentValue counted on basis:
//- does owner have entire country
//- development state of property


//Player* checkOwnership(Player* playerAtProperty);
//if property has no owner, returns nullptr
//if it isin't under mortgage it orders the bank to acquirePayment from player
//if playerAtProperty is the owner returns pointer to owner

//bool buyProperty(Player* playerAtProperty)
//passes bank order to acquire payment from player
//if payment returns true, meaning he has enough money, sets player as owner, returns true
//if he hasn't, returns false and failed

//these rely on fact that if player is the owner and mortgageState() returns false:

	//void mortgageTGL()
	//every move owner has opportunity to either take mortgage on property or pay it back
	//if mortgage is false, orders bank to payout 1/2 of market_value to player and turns true
	//else orders bank to acquirePayment from player and it it accomplishes turns mortgage -> false

//bool sellProperty(Player* playerSoldTo, unsigned price);
//passes bank order to acquire payment of 'price' from playerSoldTo to currentOwner
//if payment accomplishes: sets playerSoldTo as owner, returns true
//else false