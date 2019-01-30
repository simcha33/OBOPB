#include <iostream>
#include "Libary.h"
#include "Book.h"
#include <string>
using namespace std;

int main() {

    Libary lib1 = Libary();
    lib1.show();

    lib1.add("Lord of The rings");
    cout << "Libary 1" << endl;
    lib1.show();

    Libary lib2;
    lib2 = lib1;
    lib2.show();

    lib1.add("Grimm");
    lib1.show();

    cout << "Libary 2" << endl;
    lib2.show();

    return 0;
}
