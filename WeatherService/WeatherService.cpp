#include <iostream>
#include "JsonService.h"
#include "Weather.h"

int main()
{
    std::cout << "Import from .json:\n";
    JsonService js;
    Weather json = js.getWeather("weather.json");
    json.printWeather();
}