#include "Client.h"

Client::Client(std::string name, std::string surname, Car car) :
	Human(name, surname), clientsCar(car) {};


std::string Client::toString()
{
	std::string tempString;
	tempString = this->getName() + " " + this->getSurname() + " " + clientsCar.toString();

	return tempString;
}
