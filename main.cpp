#include <iostream>
#include <vector>
#include <ctime>
#include "Village.h"
#include "Tree.h"
#include "Branch.h"
#include "Elf.h"
#include "Twig.h"
#include "Settlement.h"

int main() {
    setlocale(LC_ALL, "Russian");
    int n = 0;
    house _house;    
    village _village(_house);
    settlement* ptr_settlement = new settlement();
    
    delete ptr_settlement;
    ptr_settlement = nullptr;
    for (size_t i = 0; i < 5; i++)
    {


        std::cout << "Всего деревьев: " << _village.__houses[i].tree_i << std::endl;
       // std::cout << "На каждом дереве основных ветвей: " << _village.__houses[i].branch_i << std::endl;
        //std::cout << "На каждой основной ветке малых ветвей: " << _village.__houses[i].twig_i << std::endl;
    }
    return 0;
}
