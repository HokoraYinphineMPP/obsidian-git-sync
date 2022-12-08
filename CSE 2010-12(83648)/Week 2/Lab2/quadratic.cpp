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
	double a, b, c;
	//prompt
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	//calc
	double x1 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
	//disp
	double x2 = (-b - sqrt(pow(b,2)-4*a*c))/(2*a);
	cout << "The two solutions are: x1 = " << x1 << ", and x2 = " << x2 << endl;
}
