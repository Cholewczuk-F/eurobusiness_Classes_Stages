#include <iostream>
#include <string>

#include "Player.h"
//#include "Pole.h"
#include "Nieruchomosc.h"
//#include "SetupData.h"
#include "Country.h"
#include "Offer.h"

unsigned Player::number_of_players = 0;
//unsigned Property::areas_quantity = 0;

int main()
{
	std::vector<Offer> tradeOffers;
	//std::vector<Property*> board = SetupData::SetupAreas();
	
	//std::vector<Country*> countries = SetupData::SetupCountries();
	//std::vector<Player*> players = SetupData::SetupPlayers();
	//first - player_id, second - rounds_left
	std::vector<std::pair<unsigned, unsigned>> jail;


	for (unsigned i = 0; i < board.size(); ++i)
	{
		std::cout << Plansza[i]->information() << std::endl;
	}

	int playersLeft = 0;
	//main game logic:
	//addition of players up to 6(?)
	//first, each player in order their details were put in "throws" dices what determines order of their turns
	//<sorting them here>
	//set-up with do-while loop, which starts with setting up number of players from players(vector). It will be executed as long one will be left.
	//IF PLAYER NOT IN JAIL:
		//1. throw
		//2. move
		//3. getOffer() - to check if there were offers for trade towards player
		//4. property.checkOwnership - based on which further actions occur
		//UtilityProperty - according to their schema
		//BoughtableProperties:
		//nullptr - propose buying property
		//returns self - interface: develop, downgrade, trade + interface
		//returns other player - pays stopPrice + interface
		//interface: view board, view players, view your properties(if has), view details of current property, end round

	//5. moves to next player
	//6. if last player has made his move, decrement everyone in jail, next round

	//view properties - function which goes through properties and displays these which belong to a player
	//view all properties also

}