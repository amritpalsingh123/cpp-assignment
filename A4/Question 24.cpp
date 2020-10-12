// Question 24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool is_prime(int number)
{
	for (int i = 2; i*i <= number; i++)
	{
		//if the number is divisible by any number 
		// other than 1 and itself it is not prime
		if (number %i == 0)
			return false;
	}
	//given number is prime 
	return  true;
}
int main()
{
	int number;

	// first test case
	number = 7;
	if (is_prime(number))
		cout << number << " is a prime number.\n";
	else
		cout << number << " is not a prime number.\n";
	// second test case
	number = 9;
	if (is_prime(number))
		cout << number << "is a prime number.\n";
	else
		cout << number << "is not a prime number.\n";
}
