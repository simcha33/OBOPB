#ifndef _COFFEE_TYPE_H_
#define _COFFEE_TYPE_H_
#include <iostream>

class CoffeeType
{
    public:
    CoffeeType();
    CoffeeType(std::string, float);
    ~CoffeeType();

    float GetPrice();
    std::string GetName();

    private:
    float price;
    std::string name;
};


#endif