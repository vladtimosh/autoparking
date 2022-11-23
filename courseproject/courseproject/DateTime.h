#pragma once


#pragma warning(disable:4996)

#include <string>
#include <ctime>

class DateTime
{
private:
	int day;
	int month;

	int hours;
	int minutes;
public:
	DateTime();
	~DateTime() = default;

	std::string toString();
};

// time_t now = time(0);
//tm* localTM = localtime(&now);
//std::cout << "Month " << localTM->tm_mon + 1;

// https://unetway.com/tutorial/c-data-i-vrema#:~:text=time_t%20time%20(time_t%20*%20time)%3B,%D1%81%D0%B8%D1%81%D1%82%D0%B5%D0%BC%D0%B0%20%D0%BD%D0%B5%20%D0%B8%D0%BC%D0%B5%D0%B5%D1%82%20%D0%B2%D1%80%D0%B5%D0%BC%D0%B5%D0%BD%D0%B8%2C%20%D0%B2%D0%BE%D0%B7%D0%B2%D1%80%D0%B0%D1%89%D0%B0%D0%B5%D1%82%D1%81%D1%8F%20.