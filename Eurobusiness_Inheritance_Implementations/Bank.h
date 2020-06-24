#ifndef __BANK_H_INCLUDED__
#define __BANK_H_INCLUDED__

class AreaUtility;
class AreaSimProperty;
class AreaAdvProperty;
class Player;

#pragma once
#include "AreaUtility.h"
#include "AreaSimProperty.h"
#include "AreaAdvProperty.h"
#include "Player.h"

static class Bank
{
private:
	//friendship declarations
	friend Player* AreaUtility::interact(Player* playerAtProperty);

	friend Player* AreaSimProperty::interact(Player* playerAtProperty);
	friend Player* AreaAdvProperty::interact(Player* playerAtProperty);

	friend void AreaSimProperty::buyProperty(Player* playerAtProperty);
	friend void AreaAdvProperty::buyProperty(Player* playerAtProperty);
	
	friend void AreaSimProperty::sellProperty(Player* playerSoldTo, unsigned price);
	friend void AreaAdvProperty::sellProperty(Player* playerSoldTo, unsigned price);

	friend void AreaSimProperty::mortgageTGL(Player* authentication);
	friend void AreaAdvProperty::mortgageTGL(Player* authentication);


	friend void AreaAdvProperty::downgrade(Player* authentication);
	friend void AreaAdvProperty::develop(Player* authentication);
	
	static bool acquirePayment(Player* playerFrom, unsigned amount);
	static bool grantPayment(Player* playerTo, unsigned amount);
	static bool moneyTransfer(Player* playerFrom, Player* playerTo, unsigned amount);

	static int money;
};

#endif // !__BANK_H_INCLUDED__