//
// Created by simch on 11-11-2018.
//

#include "Persoon.h"


Persoon::Persoon(int age, std::string name){
    naam = name;
    leeftijd = age;
}

Persoon::~Persoon(){}

int Persoon::getAge(){
    return leeftijd;
}

std::string Persoon::getName(){
    return naam;
}