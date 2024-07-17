//hw5-12.cpp - displays the total owed
//Created/revised by Hannah Haynes on 17 July 2024

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ //declare constants and variables
	const double DISCOUNT_RATE = 0.5;
	double firstItemPrice = 0.0;
	double secondItemPrice = 0.0;
	double totalOwed = 0.0;

	//enter input items
	cout << "Enter the first item price: $";
	cin >> firstItemPrice;
	cout << "Enter the second item price: $";
	cin >> secondItemPrice;

	if (firstItemPrice >= secondItemPrice)
		totalOwed = firstItemPrice + (secondItemPrice * DISCOUNT_RATE);
	else if (firstItemPrice == secondItemPrice)
		totalOwed = firstItemPrice + (secondItemPrice * DISCOUNT_RATE);
	else
		totalOwed = secondItemPrice + (firstItemPrice * DISCOUNT_RATE);
		//end if

	//display total amount owed
	cout << fixed << setprecision(2);
	cout << "Total Amount Owed: $" << totalOwed << endl;
	return 0;
}	//end of main function