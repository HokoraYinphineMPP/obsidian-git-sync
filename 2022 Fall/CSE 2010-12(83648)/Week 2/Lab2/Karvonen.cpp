/*
* Name: James Wibowo
* File Name: Quadratic.cpp
* Program: This program will calculate the quadratic formula
* Date: 08/24/22
*/

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	//init
	string fName, lName;
	double age, rHR, minTIR, maxTIR, maxHR, tarHRmn, tarHRmx;
	//prompt
	cout << "First Name: ";
	cin >> fName;
	cout << "Last Name: ";
	cin >> lName;
	cout << "Age: ";
	cin >> age;
	cout << "Resting Heart Rate: ";
	cin >> rHR;
	cout << "Minimum % Training Intensity Range: ";
	cin >> minTIR;
	cout << "Maximum % Training Intensity Range: ";
	cin >> maxTIR;
	//calc
	//Maximum Heart Rate (MHR) = 220 - Age
	//Target Heart Rate (THR) = ((MHR - Resting HR) x %Intensity) + Resting HR
	maxHR = 220-age;

	minTIR = minTIR/100;
	maxTIR = maxTIR/100;
	tarHRmn = ((maxHR - rHR) * minTIR) + rHR;
	tarHRmx = ((maxHR - rHR) * maxTIR) + rHR;
	//disp
	cout << "\nInitials: " << fName[0] << lName[0] << "\nAge: " << age << "\nResting Heart Rate (BPM): " << rHR << "\nMax Heart Rate (BPM): " << maxHR << "\n\nTarget Heart Rates (BPM)\nMinimum: " << tarHRmn << "\nMaximum: " << tarHRmx;
}
