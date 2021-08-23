#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <regex>
#include "people.h"


class peoplelist
{
	std::vector<People> peoplee;

public:
	peoplelist(std::string filePath);
	std::vector<People> getpeople();
	
};

