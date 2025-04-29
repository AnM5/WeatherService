#include <iostream>
#include "XmlService.h"
#include "Weather.h"

int main()
{
    std::cout << "\n\nImport from .xml:\n";
    XmlService xs;
    Weather xml = xs.getWeather("weather.xml");
    xml.printWeather();
}