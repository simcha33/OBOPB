#ifndef _COFFEE_MACHINE_H_
#define _COFFEE_MACHINE_H_
#include <iostream>
#include "coffeeType.h"
#include "Coins.h"

class CoffeeMachine
{
    public:
    CoffeeMachine();
    ~CoffeeMachine();
    bool ChooseCoffee(int number);
    void DisplayOptions();
    void Pay();
    void Pay(Coin);

    private:
    int userChoice;
    CoffeeType coffeeTypes[3] = { { std::string("black coffee"), 1.0f }, { std::string("cappucino"), 2.0f }, { std::string("latte"), 3.0f } };
};


#endif