#pragma once
#include "Book.h"
#include <string>

using namespace std;

class Libary
{
public:

    Libary();
    virtual ~Libary();
    Libary(const Libary& libary);
    Libary& operator=(const Libary&);
    void show();
    void add(string _title1);
    Book* book = new Book();
};
