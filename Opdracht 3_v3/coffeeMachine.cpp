#include <iostream>
#include <string>
#include "coffeeMachine.h"


CoffeeMachine::CoffeeMachine()
{}
CoffeeMachine::~CoffeeMachine(){}

void CoffeeMachine::DisplayOptions()
{
    std::cout << "What kind of coffee would you like?" << std::endl;
    std::cout << "Press 1. for black coffee" << std::endl;
    std::cout << "Press 2. for cappucino" << std::endl;
    std::cout << "Press 3. for latte" << std::endl;
}

bool CoffeeMachine::ChooseCoffee(int userInput)
{
    if(userInput > 0 && userInput < 4)
    {
        std::cout << "You have chosen the " <<  coffeeTypes[userInput-1].GetName() << std::endl;
        std::cout << "The " <<  coffeeTypes[userInput-1].GetName() << " is " << coffeeTypes[userInput-1].GetPrice() << " euro" << std::endl;
        userChoice = userInput;
        std::cout << "Please insert coins" << std::endl;
        std::cout << "Press 1. for 50 cents" << std::endl;
        std::cout << "Press 2. for 1 euro" << std::endl;
        std::cout << "Press 3. for coffee coin" << std::endl;
        return true;
    }
    else
    {
        std::cout << "Please try again" << std::endl;
        return false;
    }
}

void CoffeeMachine::Pay()
{
    std::cout << "Please insert a valid coin" << std::endl;
}
void CoffeeMachine::Pay(Coin coin)
{
    if(coin.getValue() >= coffeeTypes[userChoice-1].GetPrice())
    {
        std::cout << "Enjoy your coffee!" << std::endl;
        std::cout << "Here is your change of " << coin.getValue() - coffeeTypes[userChoice-1].GetPrice() << std::endl;
    }
    else
    {
        std::cout << "That coin is not enough to buy " << coffeeTypes[userChoice-1].GetName() << std::endl;
    }
    
}
