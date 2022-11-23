#include "File.h"


void File::write(std::string parkingName, Client client, DateTime date, ParkingPlace place)
{
	std::ofstream writer;
	writer.exceptions(std::ios::badbit | std::ios::failbit | std::ios::eofbit);
	try
	{
		writer.open(parkingName, std::ios::app);
	}
	catch (const std::ios_base::failure& e)
	{
		std::cerr << "can not open file\nwhat: " << e.what() << "\n";
	}

	writer << " " << place.toString() + " " + client.toString() + " " + date.toString() << "\n";

	writer.close();
}

void File::remove(std::string parkingName, std::string carNumber)
{
	std::vector<std::string> parked = File::read(parkingName);

	int index = 0;
	for (int i = 0; i < 3; i++) {
		if (parked[i].find(carNumber) != parked[i].npos) {
			index = i;
			break;
		}
	}

	parked.erase(parked.begin() + index);

	File::write(parkingName, parked);
}

std::vector<std::string> File::read(std::string parkingName)
{
	std::ifstream reader;
	reader.exceptions(std::ios::badbit | std::ios::failbit | std::ios::eofbit);
	try
	{
		reader.open(parkingName);
	}
	catch (const std::ios_base::failure& e)
	{
		std::cerr << "can not open file\nwhat: " << e.what() << "\n";
	}

	std::vector<std::string> parked;
	std::string tempString;

	
	for (int i = 0; i < 3; i++) {
		std::getline(reader, tempString);
		parked.push_back(tempString);
	}

	reader.close();
	

	return parked;
}

void File::write(std::string parkingName, std::vector<std::string> parkedCars)
{
	std::ofstream writer;
	writer.exceptions(std::ios::badbit | std::ios::failbit | std::ios::eofbit);
	try
	{
		writer.open(parkingName);
	}
	catch (const std::ios_base::failure& e)
	{
		std::cerr << "can not open file\nwhat: " << e.what() << "\n";
	}

	for (auto& p : parkedCars) {
		writer << p << "\n";
	}

	writer.close();
}
