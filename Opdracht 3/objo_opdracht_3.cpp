#include <iostream>
#include <string>
#include <cstdlib>

using namespace std; 

int main()
{
		
	char userChoice; 
	float payAmt = 0.00; 
	float payedAmt = 50.00; 
	
	bool coffeeType1 = false; 
	bool coffeeType2 = false; 
	bool coffeeType3 = false;  
	
	string coffeeName1 = "Black coffee"; 
	string coffeeName2 = "Cappucino"; 
	string coffeeName3 = "Latte"; 
	
	string coinType1 = "50 cent"; 
	string coinType2 = "1 euro"; 
	string coinType3 = "Coffee coin"; 
	
	float coinWorth1 = .50f; 
	float coinWorth2 = 1.00f; 
	float coinWorth3 = 2.00f; 
	
	float coffee1Prize = 1.00f; 
	float coffee2Prize = 2.00f;
	float coffee3Prize = 3.00f; 
	
	// Choose coffee
	cout << "What kind of coffee would you like?" << endl; 
	cout << "Press 1. for " << coffeeName1  << endl; 
	cout << "Press 2. for " << coffeeName2  << endl; 
	cout << "Press 3. for " << coffeeName3  << endl; 
	cin >> userChoice; 
	
	//check coffee choosen 
	if (userChoice == '1')
	{
		cout << "you have choosen the " << coffeeName1 <<endl;
		coffeeType1 = true; 
		coffeeType2 = false; 
		coffeeType3 = false;  
	}
	else if (userChoice == '2')
	{
		cout << "you have choosen the "<< coffeeName2  << endl; 
		coffeeType2 = true; 
		coffeeType1 = false; 
		coffeeType3 = false; 
	}
	else if (userChoice == '3')
	{
		cout << "you have choosen the " << coffeeName3 << endl; 
		coffeeType3 = true; 
		coffeeType1 = false; 
		coffeeType2 = false; 
	}
	
	//display price and coffeetype 
	if (coffeeType1 == true)
	{
			cout << "The " + coffeeName1 + " = "<< coffee1Prize << " euro "  << endl;  
			payAmt = coffee1Prize; 
	}
	else if (coffeeType2 == true)
	{
			cout << "The " + coffeeName2 + " = "<< coffee2Prize << " euro "  << endl;   
			payAmt = coffee2Prize; 
	}
	else if (coffeeType3 == true)
	{
			cout << "The " + coffeeName3 + " = "<< coffee3Prize << " euro "  << endl;  
			payAmt = coffee3Prize; 
	}
	
	
	//choose coin type and check if paymount is done	
	do
	{
		cout << "Please insert coins " << endl; 
		cout << "Press 1. for " << 	coinType1  << endl; 
		cout << "Press 2. for " << 	coinType2 << endl; 
		cout << "Press 3. for " << 	coinType3 << endl; 
		cin >> userChoice;
				
	if (userChoice == '1')
		{
			payAmt -= coinWorth1; 
			cout << payAmt << " euro remaining"  << endl;
		}
		else if (userChoice == '2') 
		{
			payAmt -= coinWorth2;  
			cout << payAmt << " euro remaining"  << endl;	
		}
		} while (payAmt > 0 && userChoice != '3'); 
	
	// if amount is fullfilled give the give 	
	if (payAmt <= 0 || userChoice == '3')
	{
	 	cout << "Enjoy your coffee!" << endl; 
	}
	
	return 0;	
}

	
	
