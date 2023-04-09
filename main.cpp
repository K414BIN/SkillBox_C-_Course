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
    village _villlage;
    settlement* ptr_settlement = new settlement(_villlage);
    
    delete ptr_settlement;
    ptr_settlement = nullptr;
   // std::cout << "Всего деревьев: " << quantity_of_trees << std::endl;
    //std::cout << "На каждом дереве основных ветвей: " << quantity_of_branches << std::endl;
    //std::cout << "На каждой основной ветке малых ветвей: " << quantity_of_twigs << std::endl;
    
    return 0;
}
