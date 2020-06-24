#include "SetupData.h"
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

#include "Area.h"
#include "AreaAdvProperty.h"
#include "AreaSimProperty.h"


//countries.dat
//name -- devcost -- country-id's...
//housing.dat
//0 - utility(0b/1r), 1 - special, 2 - housing
//type -- name -- value -- p0 -- p1 -- p2 -- p3 -- p4 -- p5

std::vector<Area*> SetupData::SetupAreas()
{
	std::vector<Area*> entries = {};
	std::ifstream ingest{ "Housing.dat" };
	if(!ingest)
	{
		std::cerr << "Housing.dat couldn't be opened for reading.\n";
		return entries;
	}

	while (ingest)
	{
		std::string entryLine;
		std::getline(ingest, entryLine);
		std::vector<std::string> data = split(entryLine, ",");
		
		unsigned entry_size = data.size();
		if (entry_size > 0)
		{
			int entry_Type = SetupData::strToInt(data[0]);
			
			switch (entry_Type)
			{
			case 0:
			{
				entries.push_back(addUtilityField(data));
				break;
			}
			case 1:
			{
				entries.push_back(addLtdProperty(data));
				break;
			}
			case 2:
			{
				entries.push_back(addProperty(data));
				break;
			}
			default:
			{
				break;
			}
			}
		}
	}
	return entries;
}

AreaAdvProperty* SetupData::addProperty(std::vector<std::string> data)
{
	std::string name = data[1];
	unsigned market_value = SetupData::strToInt(data[2]);
	std::vector<unsigned> dev_values;

	for (unsigned i = 3; i < data.size(); ++i)
	{
		dev_values.push_back(SetupData::strToInt(data[i]));
	}

	AreaAdvProperty* tmp = new AreaAdvProperty(name, market_value, dev_values);
	
	return tmp;
}

AreaUtility* SetupData::addUtilityField(std::vector<std::string> data)
{
	std::string name = data[1];
	unsigned operational_value;
	if (data.size() > 2)
	{
		operational_value = SetupData::strToInt(data[2]);
	}
	else
	{
		operational_value = 0;
	}
	AreaUtility* tmp = new AreaUtility(name, operational_value);
	
	return tmp;
}

AreaSimProperty* SetupData::addLtdProperty(std::vector<std::string> data)
{
	std::string name = data[1];
	unsigned market_value = SetupData::strToInt(data[2]);
	std::vector<unsigned> prices;
	
	if (data.size() > 3)
	{
		for (unsigned i = 3; i < data.size(); ++i)
		{
			prices.push_back(SetupData::strToInt(data[i]));
		}
	}
	
	AreaSimProperty* tmp = new AreaSimProperty(name, market_value, prices);
	return tmp;
}


std::vector<std::string> SetupData::split(const std::string& str, const std::string& delim)
{
	std::vector < std::string > elements;
	size_t prev = 0, pos = 0;
	do
	{
		pos = str.find(delim, prev);
		if (pos == std::string::npos) pos = str.length();
		std::string element = str.substr(prev, pos - prev);
		if (!element.empty()) elements.push_back(element);
		prev = pos + delim.length();
	} while (pos < str.length() && prev < str.length());
	return elements;
}

int SetupData::strToInt(std::string str)
{
	int number = -1;
	std::stringstream converter(str);
	if (converter >> number)
	{
		return number;
	}
	else
	{
		return -1;
	}
}
