// Monopoly.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#include "Player.h"
#include "Pole.h"
#include "Nieruchomosc.h"
#include "SetupData.h"
#include "Kraj.h"

unsigned Player::number_of_players = 0;
unsigned Pole::areas_quantity = 0;

int main()
{
	std::vector<Pole*> Plansza = SetupData::SetupAreas();
	//std::vector<Kraj*> Kraje = 

	for (unsigned i = 0; i < Plansza.size(); ++i)
	{
		std::cout << Plansza[i]->information() << std::endl;
	}
}