/*
* Name: James Wibowo
* File Name: Quadratic.cpp
* Program: This program will calculate the quadratic formula
* Date: 08/24/22
*/

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	//init
	int numPennies = 0, numNickels = 0, numDimes = 0, numQuarters = 0;

	//prompt for each coin
	//ask the user to enter the amount for each
	cout << "Please enter the number of pennies you have: ";
	cin >> numPennies;
	cout << "Please enter the number of nickels you have: ";
	cin >> numNickels;
	cout << "Please enter the number of dimes you have: ";
	cin >> numDimes;
	cout << "Please enter the number of quarters you have: ";
	cin >> numQuarters;

	//calc
	double total = (numPennies*.01)+(numNickels*.05)+(numDimes*.1)+(numQuarters*.25);

	//disp
	cout << fixed << setprecision(2) << "You have $" << total << " in change\n";
}
