#include "Weather.h"
#include <iostream>
using namespace std;

Weather::Weather() {}

Weather::Weather(std::string city, double lon, double lat, double temperature, std::string weather, double windSpeed, int clouds) :
	city(city), lon(lon), lat(lat), temperature(temperature), weather(weather), windSpeed(windSpeed), clouds(clouds) {}

void Weather::printWeather() {
	cout << "Today in " << city << " (Longitude: " << lon << ", latitude: " << lat << ") it is " << temperature << " degrees Celsius, "
		<< weather << ". The wind speed reaches " << windSpeed << "m/s. Cloud cover: " << clouds << "%.";
}


