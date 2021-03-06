#include "Country.h"
#include <string>
#include <vector>

#include "Player.h"


Country::Country(std::string namePassed, std::vector<Property*> areasPassed, unsigned devCostPassed) : name(namePassed), areas(areasPassed), devCost(devCostPassed)
{
	id = ++number;
	owner = nullptr;
}

//unsigned Kraj::getDevCost()
//returns cost of development in country

//void Kraj::checkBoughtOut()
//this method is called out every time one of towns assigned to it is bought by property -> country -> checkBoughtOut and then it goes through areas and checks if owner is the same player
//it checks if every one of them have same owner and if so assigns him to owner*

//Player* Kraj::isBoughtOut()
//returns pointer to player if is bought out
//if not returns nullptr
