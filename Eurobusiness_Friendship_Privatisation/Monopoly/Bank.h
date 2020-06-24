#pragma once
#include "Player.h"
#include "Nieruchomosc.h"
#include "NieruchomoscOgraniczona.h"
#include "PoleUsluga.h"

class Player;

static class Bank
{
	//friendship declarations
	friend void PoleUsluga::interactWith(Player* playerAtProperty);

	friend Player* Nieruchomosc::checkOwnership(Player* playerAtProperty);
	friend Player* NieruchomoscOgraniczona::checkOwnership(Player* playerAtProperty);

	friend void Nieruchomosc::buyProperty(Player* playerAtProperty);
	friend void NieruchomoscOgraniczona::buyProperty(Player* playerAtProperty);
	
	friend void Nieruchomosc::sellProperty(Player* playerSoldTo, unsigned price);
	friend void NieruchomoscOgraniczona::sellProperty(Player* playerSoldTo, unsigned price);

	friend void Nieruchomosc::mortgageTGL();
	friend void NieruchomoscOgraniczona::mortgageTGL();


	friend void Nieruchomosc::develop(Player* authentication);
	friend void Nieruchomosc::downgrade(Player* authentication);
	
private:
	static bool acquirePayment(Player* playerFrom, unsigned amount);
	static bool grantPayment(Player* playerTo, unsigned amount);
	static bool moneyTransfer(Player* playerFrom, Player* playerTo, unsigned amount);

	static int money;
};

