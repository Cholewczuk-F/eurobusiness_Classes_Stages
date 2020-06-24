#pragma once
#include <string>

//type 0 of area - utility
class PoleUsluga
{
public:

	/*virtual std::string getType();
	virtual std::string getName();
	virtual std::string information();*/
	void interactWith(Player* playerAtProperty);
	//unsigned getId()


private:

	unsigned id;
	std::string type;
	std::string name;
	int value;

	PoleUsluga(std::string name, int value);
};

