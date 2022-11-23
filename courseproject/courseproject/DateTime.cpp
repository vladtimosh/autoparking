#include "DateTime.h"

DateTime::DateTime()
{
	time_t timeNow = time(0);

	tm *localTime = localtime(&timeNow);

	this->day = localTime->tm_mday;
	this->month = localTime->tm_mon + 1;
	this->hours = localTime->tm_hour;
	this->minutes = localTime->tm_min;
}

std::string DateTime::toString()
{
	std::string tempString;
	tempString = std::to_string(this->month) + "." +
		std::to_string(this->day) + " " +
		std::to_string(this->hours) + ":" +
		std::to_string(this->minutes);

	return tempString;
}
