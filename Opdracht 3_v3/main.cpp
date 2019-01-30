#include <iostream>
#include "coffeeMachine.h"
#include "coffeeType.h"
#include "Coins.h"

int main()
{
    FiftyCentCoin fiftyCentCoin;
    OneEuroCoin oneEuroCoin;
    CoffeeCoin coffeeCoin;

    CoffeeMachine coffeeMachine = CoffeeMachine();
    coffeeMachine.DisplayOptions();
    int userInput;
    std::cin >> userInput;
    if(coffeeMachine.ChooseCoffee(userInput))
    {
        std::cin >> userInput;
        if(userInput == 1)
        {
            coffeeMachine.Pay(fiftyCentCoin);
        }
        else if(userInput == 2)
        {
            coffeeMachine.Pay(oneEuroCoin);
        }
        else if(userInput == 3)
        {
            coffeeMachine.Pay(coffeeCoin);
        }
        else
        {
            coffeeMachine.Pay();
        }
        
    }
    else
    {
        return 0;
    }
    return 0;
}