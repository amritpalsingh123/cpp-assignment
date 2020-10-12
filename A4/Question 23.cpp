// Question 23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void func(int array[], int size, int n) // declaration of variable
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] > n)
			cout << array[i] << ' ';
	}
	cout << '\n';
}
int main()
{
	//first test class
	cout << "test case 1: ";
	int sizel = 5, nl = 3;
	int array1[sizel];
	array1[0] = 1;
	array1[1] = 2;
	array1[2] = 3;
	array1[3] = 4;
	array1[4] = 5;
	// calling the function 
	func(array1, sizel, nl);
	// second test case
	cout << "test case 2: ";
	int size2 = 7, n2 = 8;
	int array2[size2];
	array2[0] = 5;
	array2[1] = 4;
	array2[2] = 7;
	array2[3] = 10;
	array2[4] = 11;
	array2[5] = 9;
	array2[6] = 14;
	//calling the function 
	func(array2, size2, n2);
}

    
