/*

                               / Менеджер
        Человек   -  Работник 
               \               \ Парковщик 
                Посетитель

        Машина

        Парковочное место

        Работа с файлами

        Время
*/

// 20:11
// 22:11 create method to parse currect time 
// place floor name surname carNumber dateArrival
// e.g : output :: "512 5 300.0 Vladislav Timoshenko 1234AB5 11.23 20:17" (1)


#pragma warning(disable:4996)
#include "ParkingPlace.h"
#include "File.h"

#include <fstream>
#include <sstream>
#include <iostream>

int main()
{
    std::string str = "215 1 30.500000 Vladislav Zavalei 7777TT7 11.23-20:55", word;
    std::stringstream words(str);
    std::vector<std::string> strs;
    while (words >> word) {
        strs.push_back(word);
    }

    std::cout << strs[strs.size() - 1];

    //File::remove("test.txt", "9876AA1");
}
