#include "Player.h"
#include "Bank.h"


bool Bank::acquirePayment(Player* playerFrom, unsigned amount)
{
	//playerFrom->account = 0;
}
//transfers money from player's account to bank

bool Bank::grantPayment(Player* playerTo, unsigned amount)
{
	//playerTo->account = 0;
}
//method is friend with methods downgrade, mortgageTGL, 
//transfers money from bank to player's account

bool Bank::moneyTransfer(Player* playerFrom, Player* playerTo, unsigned amount)
{
	acquirePayment(playerFrom, amount);
	grantPayment(playerTo, amount);
}
//friend with sellProperty, checkOwnership
//macro of acquirePayment and grantPayment