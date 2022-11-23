#include "ParkingPlace.h"

ParkingPlace::ParkingPlace(int place, int floor, double price) {
	this->parkingPlaceNumber = place;
	this->floor = floor;
	this->price = price;
}

std::string ParkingPlace::toString()
{
	std::string tempString;
	tempString = std::to_string(parkingPlaceNumber) + " " + std::to_string(floor) + " " + std::to_string(price);

	return tempString;
}
