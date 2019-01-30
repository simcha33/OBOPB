#include "Libary.h"
#include <string>
#include <iostream>


using namespace std;


Libary::Libary() {}

Libary::~Libary() {
    delete book;
}

Libary::Libary(const Libary& libary) {
    book = new Book();
    book->title1 = libary.book->title1;
}

Libary& Libary::operator=(const Libary& newLib) {
    if (this != &newLib) {
        if (book) {
            delete book;
        }
        book = new Book(newLib.book->title1);
    }
    return *this;
}

void Libary::show() {
    cout << "Libary:" << book->title1 << endl;
}

void Libary::add(string _title1) {
    book = new Book(_title1);
}