#include <iostream>
#include "coffeeType.h"


CoffeeType::CoffeeType(std::string Name, float Price)
{
    name = Name;
    price = Price;
}
CoffeeType::~CoffeeType(){}

float CoffeeType::GetPrice()
{
    return price;
}
std::string CoffeeType::GetName()
{
    return name;
}