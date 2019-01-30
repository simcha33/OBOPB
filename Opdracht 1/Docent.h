//
// Created by simch on 11-11-2018.
//

#ifndef OPDRACHT_2_DOCENT_H
#define OPDRACHT_2_DOCENT_H

#include <string>
#include "Persoon.h"
class Docent : public Persoon{

public:
  using Persoon::Persoon;

  void setVacations(int);

private:

    int vacation;
};


#endif //OPDRACHT_2_DOCENT_H
