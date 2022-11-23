#pragma once

#include "DateTime.h"
#include "Car.h"
#include "Client.h"

class ParkingPlace
{
	int parkingPlaceNumber;
	int floor;

	double price;
public:
	ParkingPlace(int, int, double);

	std::string toString();
};

