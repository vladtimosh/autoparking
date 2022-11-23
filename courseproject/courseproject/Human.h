#pragma once

#include <string>

class Human
{
private:
	std::string name;
	std::string surname;
public:
	Human(std::string, std::string);
	~Human() = default;

	std::string getName();
	std::string getSurname();
};

