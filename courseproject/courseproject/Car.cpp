#include "Car.h"

Car::Car(std::string identificationNumber)
{
	this->identificationNumber = identificationNumber;
}

std::string Car::toString()
{
	return this->identificationNumber;
}
