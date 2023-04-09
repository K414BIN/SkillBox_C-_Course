#include "Settlement.h"
#include <iostream>
#include <vector>


house settlement::update(house item,int x, int y, int z, int h, std::string name)
{
     house result = item;
     
     if ("None" == name || "none" == name) {}
     else {
            result.housekeeper = name;
            result.tree_i = x;
            result.branch_i = y;
            result.twig_i = z;
            result.house_i = h;
            std::cout << "Ќа  дереве " << result.tree_i << " основна€ ветвь " << result.branch_i << " мала€ ветвь " << result.twig_i << " в " << result.house_i << " доме живет " << result.housekeeper << std::endl;
     }
     return result;
}


settlement::settlement(village &val)
{
    house* value = new house();
    int begin = 3;
    int end = 5;
    for (size_t i = 0; i < end; i++)    {
        
        value->tree_i = i;
        size_t length = gen_rnd(begin, end);

        for (size_t k = begin; k < length; k++)
        {
            value->branch_i = k;
            int rnd_max = 3;
            int rnd_min = 2;
            size_t len = gen_rnd(rnd_min, rnd_max);
            for (size_t j = rnd_min; j < len; j++)
            {
                value->twig_i = j;
                val.houses(*value);
            }
        }                
    }
    delete value;
    value = nullptr;
}

settlement::~settlement()
{
}

int settlement::gen_rnd(int min_rnd_value,int max_rnd_value)
{
    int x;
    srand(time(nullptr));
    do {
        x = min_rnd_value + rand() / ((RAND_MAX + 1u) / max_rnd_value);
    } while (x >= max_rnd_value);
    return x;
}