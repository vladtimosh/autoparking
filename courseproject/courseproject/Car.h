#pragma once
#include <regex>
#include <string>

const std::regex numberRegular(); // create regular (1111AA1)

class Car
{
private:
	std::string identificationNumber;

public:
	Car(std::string);
	std::string toString();
};

