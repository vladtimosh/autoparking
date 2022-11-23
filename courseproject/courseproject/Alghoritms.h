#pragma once


#include <string>
#include <vector>
#include <sstream>

class Alghoritms
{
	static std::string parseStringtoDate(std::string originalString) {
        std::string temp = originalString, word;

        std::stringstream words(temp);
        std::vector<std::string> strs;

        while (words >> word) {
            strs.push_back(word);
        }

        return strs[strs.size() - 1];
	}
};

