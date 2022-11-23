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
#include <iostream>

int main()
{
    //Car car("7777TT7");
    //DateTime date;
    //Client client("Vladislav", "Zavalei", car);
    //ParkingPlace park(5, 1, 30.50);
   
    //File::write("test.txt", client, date, park);
    std::vector<std::string> parked = File::read("test.txt");
    for (auto& p : parked) {
        std::cout << p << "\n";
    }
    File::remove("test.txt", "9876AA1");
}
