#include <iostream>
#include <string>
#include <cstdlib>

#include "CoffeeMachine.h"
#include "FiftyCentCoin.h"
#include "OneEuroCoin.h"
#include "CoffeeCoin.h"

using namespace std;

int main()
{
    CoffeeMachine coffeeMachine;
    FiftyCentCoin fiftyCentCoin;
    OneEuroCoin oneEuroCoin;
    CoffeeCoin coffeeCoin;

    //char userChoice;
    //float payAmt = 0.00;
    //float payedAmt = 50.00;
    //float changeAmt;

    //bool coffeeType1 = false;
    //bool coffeeType2 = false;
    //bool coffeeType3 = false;

    //string coffeeName1 = "Black coffee";
    //string coffeeName2 = "Cappucino";
    //string coffeeName3 = "Latte";

    //string coinType1 = "50 cent";
    //string coinType2 = "1 euro";
    //string coinType3 = "Coffee coin";

    //float coinWorth1 = .50f;
    //float coinWorth2 = 1.00f;
    //float coinWorth3 = 2.00f;

    //float coffee1Prize = 1.00f;
    //float coffee2Prize = 2.00f;
    //float coffee3Prize = 3.00f;

    // Choose coffee
    cout << "What kind of coffee would you like?" << endl;
    cout << "Press 1. for " << coffeeMachine.coffeeName1  << endl;
    cout << "Press 2. for " << coffeeMachine.coffeeName2  << endl;
    cout << "Press 3. for " << coffeeMachine.coffeeName3  << endl;
    cin >> coffeeMachine.userChoice;

    //check coffee choosen
    if (coffeeMachine.userChoice == '1') {
        cout << "you have choosen the " << coffeeMachine.coffeeName1 << endl;
        coffeeMachine.coffeeType1 = true;
        coffeeMachine.coffeeType2 = false;
        coffeeMachine.coffeeType3 = false;
    } else if (coffeeMachine.userChoice == '2') {
        cout << "you have choosen the " << coffeeMachine.coffeeName2 << endl;
        coffeeMachine.coffeeType2 = true;
        coffeeMachine.coffeeType1 = false;
        coffeeMachine.coffeeType3 = false;
    } else if (coffeeMachine.userChoice == '3') {
        cout << "you have choosen the " << coffeeMachine.coffeeName3 << endl;
        coffeeMachine.coffeeType3 = true;
        coffeeMachine.coffeeType1 = false;
        coffeeMachine.coffeeType2 = false;
    }

    //display price and coffeetype
    if (coffeeMachine.coffeeType1 == true) {
        cout << "The " + coffeeMachine.coffeeName1 + " = " << coffeeMachine.coffeePrice1 << " euro " << endl;
        coffeeMachine.payAmt = coffeeMachine.coffeePrice1;
    } else if (coffeeMachine.coffeeType2 == true) {
        cout << "The " + coffeeMachine.coffeeName2 + " = " << coffeeMachine.coffeePrice2 << " euro " << endl;
        coffeeMachine.payAmt = coffeeMachine.coffeePrice2;
    } else if (coffeeMachine.coffeeType3 == true) {
        cout << "The " + coffeeMachine.coffeeName3 + " = " << coffeeMachine.coffeePrice3 << " euro " << endl;
        coffeeMachine.payAmt = coffeeMachine.coffeePrice3;
    }

    //choose coin type and check if paymount is done
    do
    {
        cout << "Please insert coins " << endl;
        cout << "Press 1. for " << 	fiftyCentCoin.coinType  << endl;
        cout << "Press 2. for " << 	oneEuroCoin.coinType << endl;
        cout << "Press 3. for " << 	coffeeCoin.coinType << endl;
        cin >> coffeeMachine.userChoice;

        if (coffeeMachine.userChoice == '1')
        {
            coffeeMachine.payAmt -= fiftyCentCoin.coinWorth;
            cout << coffeeMachine.payAmt << " euro remaining"  << endl;
        }
        else if (coffeeMachine.userChoice == '2')
        {
            coffeeMachine.payAmt -= oneEuroCoin.coinWorth;
            cout << coffeeMachine.payAmt << " euro remaining"  << endl;
        }
    } while (coffeeMachine.payAmt > 0 && coffeeMachine.userChoice != '3');

    //check change amt
    if (coffeeMachine.payAmt < 0)
    {
        coffeeMachine.changeAmt = coffeeMachine.payAmt * -1;
        cout << "Your change = " << coffeeMachine.changeAmt << endl;
    }

    if (coffeeMachine.payAmt <= 0 || coffeeMachine.userChoice == '3')
    {
        cout << "Enjoy your coffee!" << endl;
    }
    return 0;
}

