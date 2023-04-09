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
		int tree_i;
		int branch_i;
		int twig_i;
		std::string housekeeper;
private:

};

#endif