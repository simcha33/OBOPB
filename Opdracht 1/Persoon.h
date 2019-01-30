//
// Created by simch on 11-11-2018.
//

#ifndef OPDRACHT_2_PERSOON_H
#define OPDRACHT_2_PERSOON_H

#include <string>

class Persoon {

public:
    Persoon();
    Persoon(int, std::string);
    ~Persoon();
    int getAge();
    std::string getName();

private:
    int leeftijd;
    std::string naam;
};

#endif //OPDRACHT_2_PERSOON_H
