#include "Country.h"



Country::Country(std::string namePassed, std::vector<Area*> areasPassed, unsigned devCostPassed) : name(namePassed), areas(areasPassed), devCost(devCostPassed)
{
	id = ++number_of_countries;
	owner = nullptr;
}



//unsigned Kraj::getDevCost()
//returns cost of development in country

//void Kraj::checkBoughtOut()
//this method is called out every time one of towns assigned to it is bought by property -> country -> checkBoughtOut and then it goes through areas and checks if owner is the same player
//it checks if every one of them have same owner and if so assigns him to owner*

//Player* Kraj::getOwner()
//returns pointer to player if is bought out
//if not returns nullptr
