#pragma once
#include <vector>
#include "House.h"

#ifndef VILLAGE
#define VILLAGE

class village
{
public:
	~village();	
	village::village(house& value);
	std::vector<house> __houses;
	


	
private:
	std::vector<house> houses(house &value);

};

#endif
