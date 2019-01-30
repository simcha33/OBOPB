#include <iostream>
#include "Coins.h"

float Coin::getValue()
{
    return value;
}

FiftyCentCoin::FiftyCentCoin()
{
    value = 0.50f;
}
OneEuroCoin::OneEuroCoin()
{
    value = 1.00f;
}
CoffeeCoin::CoffeeCoin()
{
    value = 3.00f;
}