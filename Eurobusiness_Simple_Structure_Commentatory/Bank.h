#pragma once

#include "Player.h"

static class Bank
{
	static unsigned money;

	bool acquirePayment(Player* playerFrom, unsigned amount);
	bool grantPayment(Player* playerTo, unsigned amount);
	bool moneyTransfer(Player* playerFrom, Player* playerTo, unsigned amount);
};

