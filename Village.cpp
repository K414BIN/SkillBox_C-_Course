#include "Village.h"

village::village()
{
}
std::vector<house> village::houses( house value)
{
	std::vector<house> result;
	result.push_back(value);
	return result;
}

village::~village()
{
}