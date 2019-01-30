#pragma once
#include <string>

using namespace std;

class Book
{
public:
    Book();
    virtual ~Book();
    Book(string _title1);
    string title1;
};

