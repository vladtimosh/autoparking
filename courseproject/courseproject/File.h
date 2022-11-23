#pragma once

#include "Car.h"
#include "Client.h"
#include "DateTime.h"
#include "ParkingPlace.h"

#include <fstream>
#include <iostream>

class File {
public:
	static void write(std::string parkingName, Client client, DateTime date, ParkingPlace place);
	static void remove(std::string parkingName, std::string carNumber);
	static std::vector<std::string> read(std::string parkingName);
	static void write(std::string parkingName, std::vector<std::string> parkedCars);

	// to be continued.
};

