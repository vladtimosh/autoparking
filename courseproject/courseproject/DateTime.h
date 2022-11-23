#pragma once


#pragma warning(disable:4996)

#include <string>
#include <ctime>

// case 1 if next day time lower
// 19:15 || 10:10 = 23:60 - 19:15 = 4:45 || 4:45 + 10:10 = 14:55 
// case 2 if next day time higher
// 10:10 || 19:15 = 23:60 - 10:10 = 13:50 || 13:50 + 19:15 = 33:05

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