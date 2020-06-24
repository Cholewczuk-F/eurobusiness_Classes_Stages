#include "Nieruchomosc.h"
#include "Country.h"

#include <string>
#include <vector>

Nieruchomosc::Nieruchomosc(std::string namePassed, unsigned m_value, std::vector<unsigned>& prices, Country* krajPassed)
{
	id++;
	type = "Nieruchomosc";
	this->name = namePassed;
	market_value = m_value;
	dev_state = 0;
	dev_prices = prices;
	owner = NULL;
	country = krajPassed;
	mortgage = false;
}

std::string Nieruchomosc::getType()
{
//	return o_type;
}

std::string Nieruchomosc::getName()
{
//	return o_name;
}

//unsigned getDevState();
//returns development state of property

std::string Nieruchomosc::information()
{
	/*std::string info = "ID:" + std::to_string(o_id)
		+ " Type:" + o_type
		+ " Name:" + o_name
		+ " Price:" + std::to_string(market_value)
		+ " Dev state:" + std::to_string(dev_state);
	for(int i = 0; i < dev_prices.size(); ++i)
	{
		info += " Cost " + std::to_string(i);
		info += ":" + std::to_string(dev_prices[i]);
	}
	info += " \n";

	return info;*/
}
//returns information about property

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
//payment will be count in countPayment
//if playerAtProperty is the owner returns pointer to owner

//bool buyProperty(Player* playerAtProperty)
//passes bank order to acquire payment from player
//if payment returns true, meaning he has enough money assigns player as owner and transaction is accomplished
//if he hasn't, returns false and failed


//these rely on fact that if player is the owner and mortgageState() returns false:

	//bool develop()
	//if there are houses avaible, it orders owner to pay price of one - taken from country
	//if true from pay(), increments dev_state, decrements no_houses

	//bool downgrade()
	//if dev_state > 0, orders bank to payout price of one - taken from country - to owner, then

	//void mortgageTGL()
	//every move owner has opportunity to either take mortgage on property or pay it back
	//if mortgage is false, orders bank to payout 1/2 of market_value to player and turns true
	//else orders bank to acquirePayment from player and it it accomplishes turns mortgage -> false


//bool sellProperty(Player* playerSoldTo, unsigned price);
//passes bank order to acquire payment of 'price' from playerSoldTo to currentOwner by moneyTransfer
//if payment accomplishes: sets playerSoldTo as owner, returns true
//else false