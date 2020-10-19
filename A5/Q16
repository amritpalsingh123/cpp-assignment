/ Q16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int* reverse(int array[], int n)
{
	int*arr = new int[n];
	for (int i = 0; i < n; i++)
		*(arr + i) = array[n - i - 1];
	return arr;
}

int main()
{
	int array[5] = { 1,2,3,4,5 };
	int *arr = reverse(array, 5);
	cout << "Original Array:";
	for (int i = 0; i < 5; i++)
	{
		cout << *(array + i) << "\t";
	}
	cout << "\nCopy Array:";
	for (int i = 0; i < 5; i++)
	{
		cout << *(arr + i) << "\t";
	}
	return 0;
}
