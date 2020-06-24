#pragma once
#include "AreaAdvProperty.h"
#include "AreaSimProperty.h"
#include "AreaUtility.h"
#include "Area.h"

#include <vector>
#include <string>

static class SetupData
{
public:
	static std::vector<Area*> SetupAreas();
	//static std::vector<std::unique_ptr<Area>> SetupAreas();
	static AreaAdvProperty* addProperty(std::vector<std::string> data);
	static AreaUtility* addUtilityField(std::vector<std::string> data);
	static AreaSimProperty* addLtdProperty(std::vector<std::string> data);

	static std::vector<std::string> split(const std::string& str, const std::string& delim);
	static int strToInt(std::string str);


};

