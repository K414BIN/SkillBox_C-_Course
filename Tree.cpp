#include "Tree.h"
#include "Branch.h"
#include <vector>
#include <ctime>

tree::tree()
{
    branch *ptr_branch = new branch();
    std::vector<branch> main_branches(quantity_of_branches);
    delete ptr_branch;
    ptr_branch = nullptr;
    
}

tree::~tree()
{
   
}
