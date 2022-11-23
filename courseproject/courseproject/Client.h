#pragma once

#include "Car.h"
#include "Human.h"

class Client: public Human
{
private:
	// name surname
	Car clientsCar;
public:
	Client(std::string, std::string, Car);
	~Client() = default;

	std::string toString();
};

