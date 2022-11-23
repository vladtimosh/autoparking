#pragma once

#include "Car.h"
#include "Client.h"
#include "DateTime.h"
#include "ParkingPlace.h"

#include <fstream>
#include <iostream>

class File {
public:
	// write to file info like e.g (1) !!!done maybe
	static void write(std::string parkingName, Client client, DateTime date, ParkingPlace place);

	// remove using carNumber; 
	// 1) Need to find string with this number
	// 2) Delete this string, move down strings up
	// 3) Safe
	// or create std::vector of objects like ParkedCars;
	// find this and erase, write this objects back; // it easier?

	// in end check hours and put how much money need to pay
	static void remove(std::string parkingName, std::string carNumber);


	// call remove -> its calls read to get all cars -> back to remove and delete -> write(std::vector) -> end
	// vector of parked cars to find car to remove and write it again
	static std::vector<std::string> read(std::string parkingName);
	static void write(std::string parkingName, std::vector<std::string> parkedCars);
};

