#include "PoleUsluga.h"

#include <string>


//ideally PoleUsluga will derive from Pole class, inheriting id, type, name
PoleUsluga::PoleUsluga(std::string namePassed, int passedValue)
{
	//id++;
	type = "PoleUsluga";
	name = namePassed;
	value = passedValue;
}

//std::string PoleUsluga::getType()
//{
//	return type;
//}

//std::string PoleUsluga::getName()
//{
//	return name;
//}

//std::string PoleUsluga::information()
//{
//	std::string info = "ID:" + std::to_string(id)
//		+ " Type:" + type
//		+ " Name:" + name
//		+ " Value:" + std::to_string(value)
//		+ " \n";
//
//	return info;
//}


//std::string checkPlayer(Player* playerAtProperty)
//SWITCH CONTROLLED BY STRING VALUES
//called-out when player stands on area, depending on string value in objects parameter "name" different actions occur.

//for "start" returns "Congratulations! For passing Start you're granted 400$!

//for "guarded" it fines player value stored in it

//for "opportunity" calls out static static classe's Opportunity method Random, passing value of 1 or 0 stored in value, which randomizes event happening to player.

//for "visiting" passes "You're visiting jail!"

//for "free_parking" it pay's out all tax money collected at the center of the board

//for "jail" put's player to jailed(pair of vectors) collection in monopoly.cpp which decrements every round until 3 rounds pass

//for "tax" fines player value stored