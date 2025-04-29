﻿#include <iostream>
#include <clocale>
#include "JsonService.h"
#include "Weather.h"
#include "XmlService.h"

int main()
{
    setlocale(LC_ALL, "rus");

    std::cout << "Import from .json:\n";
    JsonService js;
    Weather json = js.getWeather("weather.json");
    json.printWeather();

    std::cout << "\n\nImport from .xml:\n";
    XmlService xs;
    Weather xml = xs.getWeather("weather.xml");
    xml.printWeather();
}