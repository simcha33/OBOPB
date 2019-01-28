//
// Created by simch on 12-11-2018.
//

#include "SendHelp.h"

int Bus::calculateMoney(){
    return Bus::numberOfSeats * Bus::kilometerPrice;
}
int Train::calculateMoney(){
    return Train::numberOfSeats * Train::kilometerPrice + Train::bonusFee;
}

int ICE::calculateMoney(){
    return ICE::numberOfSeats * ICE::kilometerPrice + ICE::bonusFee;
}

int Thalys::calculateMoney(){
    return Thalys::numberOfSeats * Thalys::kilometerPrice + Thalys::bonusFee;
}