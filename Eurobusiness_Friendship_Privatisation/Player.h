#pragma once
#include "Bank.h"
#include "Offer.h"
#include <vector>

//class Bank;

class Player
{
public:
    static unsigned number_of_players;

    Player();

    //utility methods
    unsigned getId();
    std::string getName();
    unsigned getPosition();
    

    //void getOffer(Player* seller, Pole* property, unsigned offerValue);
    Offer makeOffer();
    void move(unsigned amount);



private:
    
    friend bool Bank::acquirePayment(Player* playerFrom, unsigned amount);
    friend bool Bank::grantPayment(Player *playerTo, unsigned amount);


    unsigned id;
    std::string name; //(player's recognition)
    unsigned position;
    unsigned account;
};

