#pragma once
#include <string>
#include "Twig.h"
#ifndef HOUSE
#define HOUSE
class house : public twig
{
public:
	house();
	~house();

		int house_i=0;
		std::string housekeeper="";
private:

};

#endif