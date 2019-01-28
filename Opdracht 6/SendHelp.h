//
// Created by simch on 12-11-2018.
//

#ifndef OPDRACHT_6_SENDHELP_H
#define OPDRACHT_6_SENDHELP_H


class Vehicle {
protected:
    int bonusFee;
    int numberOfSeats;
    int kilometerPrice;

public:
    virtual int berekenOpbrengst() = 0;
};

class Bus : Vehicle
{
private:
    int numberOfSeats = 24;
    int bonusFee = 0;
    int kilometerPrice = 5;
public:
    int calculateMoney();
};

class Train : Vehicle
{
private:
    int numberOfSeats = 600;
    int bonusFee = 0;
    int kilometerPrice = 4;
public:
    int calculateMoney();
};

class ICE : Vehicle
{
private:
    int numberOfSeats = 600;
    int bonusFee = 20;
    int kilometerPrice = 10;
public:
    int calculateMoney();
};

class Thalys : Vehicle
{
private:
    int numberOfSeats = 800;
    int bonusFee = 50;
    int kilometerPrice = 15;
public:
    int calculateMoney();
};


#endif //OPDRACHT_6_SENDHELP_H
