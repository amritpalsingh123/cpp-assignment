 ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "Please enter 0 to indicate USD->CAD conversion, or enter 1 to indicate CAD->USD conversion:" << endl;
	cin >> number;
	

	switch (number)
	{
	case 0:
		double a;
		double b;
		cout << "Please enter the amount of USD dollars:";
		cin >> a;
		b = a * 1.32;
		cout << "They can be converted to " << b << "dollars" << endl;
		break;
	case 1:
		double c;
		double d;
		cout << "Please enter the amount of CAD dollars :";
		cin >> c;
		d = c / 1.32;
		cout << "They can be converted to" << d << "USD.";
		break;
	default:
		cout << "Wrong choice";

	}
	return 0;
}

