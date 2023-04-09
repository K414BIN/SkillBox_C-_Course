#pragma once
#include "Tree.h"
#ifndef BRANCH
#define BRANCH

class branch : public tree
{
public:
	branch();
	~branch();
	int branch_i = 0;
	int quantity_of_twigs = 0;
private:

};

#endif // BRANCH