#include <iostream>
#include <vector>
#include <ctime>
#include "Tree.h"

int  max_rnd_value = 5;

int gen_rnd(int base) {
   int x;
   srand(time(nullptr));
    do {   
        x = base + rand() / ((RAND_MAX + 1u) / max_rnd_value);
    } while (x >= max_rnd_value);
    return x;
}


int main() {
    setlocale(LC_ALL, "Russian");
    int n = 1;
    int quantity_of_trees = max_rnd_value;   
    int quantity_of_branches = gen_rnd(3);
    max_rnd_value = 3;
    int quantity_of_twigs = gen_rnd(2);
    std::cout << "Всего деревьев: " << quantity_of_trees << std::endl;
    tree *ptr_tree = new tree();
    ptr_tree->quantity_of_branches =  quantity_of_branches;
    std::vector<tree> forest(quantity_of_trees);

    delete ptr_tree;
    ptr_tree = nullptr;
   
    std::cout << "На каждом дереве основных ветвей: " << quantity_of_branches << std::endl;
    std::cout << "На каждой основной ветке малых ветвей: " << quantity_of_twigs << std::endl;
    n++;
    return 0;
}
