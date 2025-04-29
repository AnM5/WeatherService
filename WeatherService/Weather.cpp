#include "Weather.h"
#include <iostream>
using namespace std;

Weather::Weather() {}

Weather::Weather(std::string city, double lon, double lat, double temperature, std::string weather, double windSpeed, int clouds) :
	city(city), lon(lon), lat(lat), temperature(temperature), weather(weather), windSpeed(windSpeed), clouds(clouds) {}

void Weather::printWeather() {
	cout << "Сегодня в городе " << city << " (Долгота: " << lon << ", широта: " << lat << ") " << temperature << "градуса по Цельсию. "
		<< weather << ". Скорость ветра достигает " << windSpeed << ". Облачность: " << clouds << "%.";
}


