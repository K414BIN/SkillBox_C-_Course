#pragma once
#include "House.h"
#include "Village.h"

#ifndef SETTLEMENT
#define SETTLEMENT
class settlement
{
public:
	house update(house item, int x, int y, int z, int h, std::string name);	
	
	settlement(village& value);
	~settlement();
	
private:
	int gen_rnd(int min_rnd_value, int max_rnd_value);
	
};


#endif 