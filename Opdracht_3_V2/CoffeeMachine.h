#ifndef UNTITLED2_COFFEEMACHINE_H
#define UNTITLED2_COFFEEMACHINE_H
#include <string>

using namespace std;

class CoffeeMachine {
    public:

        void chooseCoffee();
        char userChoice;
        float payAmt = 0.00;
        float changeAmt;

        bool coffeeType1 = false;
        bool coffeeType2 = false;
        bool coffeeType3 = false;

        float coffeePrice1 = 1.00f;
        float coffeePrice2 = 2.00f;
        float coffeePrice3 = 3.00f;

        string coffeeName1 = "Black coffee";
        string coffeeName2 = "Cappucino";
        string coffeeName3 = "Latte";
};


#endif //UNTITLED2_COFFEEMACHINE_H
