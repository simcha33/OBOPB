#ifndef _COINS_H_
#define _COINS_H_

class Coin
{
    public:
    float getValue();

    protected:
    float value;
};

class FiftyCentCoin : public Coin
{
    public:
    FiftyCentCoin();
};

class OneEuroCoin : public Coin
{
    public:
    OneEuroCoin();
};

class CoffeeCoin : public Coin
{
    public:
    CoffeeCoin();
};

#endif