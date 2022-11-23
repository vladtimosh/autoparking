#include "Human.h"

Human::Human(std::string name, std::string surname)
{
	this->name = name;
	this->surname = surname;
}

std::string Human::getName()
{
	return this->name;
}

std::string Human::getSurname()
{
	return this->surname;
}
