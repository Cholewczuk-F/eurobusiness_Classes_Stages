#ifndef __PLAYER_H_INCLUDED__
#define __PLAYER_H_INCLUDED__

class Bank;
struct Offer;

#pragma once
#include "Bank.h"
#include "Offer.h"
#include <string>

class Player
{
    //friendship declarations
    friend bool Bank::acquirePayment(Player* playerFrom, unsigned amount);
    friend bool Bank::grantPayment(Player *playerTo, unsigned amount);

public:
    static unsigned number_of_players;

    Player();

    //utility methods
    unsigned getId();
    std::string getName();
    unsigned getPosition();
    
    //void getOffer(Player* seller, Area* property, unsigned offerValue);
    Offer makeOffer();
    void move(unsigned amount);

private:

    unsigned id;
    std::string name; //(player's recognition)
    unsigned position;
    unsigned account;
};

#endif // !__PLAYER_H_INCLUDED__