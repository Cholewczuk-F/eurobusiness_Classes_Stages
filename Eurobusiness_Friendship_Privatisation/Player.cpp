#include <iostream>
#include "Player.h"
#include "Offer.h"


using namespace std;

Player::Player() 
{
	id = number_of_players++;
	position = 0;
	account = 3000;	
}

//unsigned getPosition()
//returns position

//void makeOffer()
//displayed as as option when it's player's turn and has properties to offer
//1. displays players to which offer can be made
//2. displays properties which can be sold
//3. displays input for offerValue -> made type-safe for unsigned
//4. appropriate offer-struct is created into vector<Offer> and awaiting for getOffer()
//status set false

//void getOffer() - friend with Property.sell()
//is called-out at beginning of players turn ONCE
//1. search for: self - seller offers
	//	with status true
	//	Property.sell(self/Offer.buyer) is called out
		//if Property.sell() returns true, displayed "successful trade"
		//else: tells player transaction couldn't be realised.
	//	with status false - displayed "trade declined" 
//EOL for struct, being removed from vector
//
//2. search for: self - buyer -- doesn't matter what status, wouldn't be here if not pending
	//displays offer and property status and writes-in answer as status 1/2
	//if player accepts and hasn't got enough money, displays "you don't have sufficient funds for trade"'

//void move(unsigned amount);
//this operation will keep track of player's position. also keeping it withing range <1, 40>, it take's up input from 1 to 12.
//if player got on 40 or 40 + and his position = position%40 was calculated, he should be granted 400$