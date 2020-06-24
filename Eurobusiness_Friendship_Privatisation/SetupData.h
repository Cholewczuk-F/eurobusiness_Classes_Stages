#pragma once
#include <vector>
#include <string>
#include "Nieruchomosc.h"
#include "NieruchomoscOgraniczona.h"
#include "PoleUsluga.h"

#include "Pole.h"

static class SetupData
{
public:
	static std::vector<Pole*> SetupAreas();
	//static std::vector<std::unique_ptr<Pole>> SetupAreas();
	static Nieruchomosc* addProperty(std::vector<std::string> data);
	static PoleUsluga* addUtilityField(std::vector<std::string> data);
	static NieruchomoscOgraniczona* addLtdProperty(std::vector<std::string> data);

	static std::vector<std::string> split(const std::string& str, const std::string& delim);
	static int strToInt(std::string str);


};

