#pragma once
#include "Weather.h"
#include <string>
class Service
{
private:

public:
	virtual Weather getWeather(std::string s) = 0;
	
	virtual ~Service() {};
};

