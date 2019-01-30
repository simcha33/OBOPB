//
// Created by simch on 11-11-2018.
//

#ifndef OPDRACHT_2_STUDENT_H
#define OPDRACHT_2_STUDENT_H

#include <string>
#include "Persoon.h"


class Student : public Persoon{

public:
    using Persoon::Persoon;

    void setEC(int);
private:
    int EC;


};


#endif //OPDRACHT_2_STUDENT_H
