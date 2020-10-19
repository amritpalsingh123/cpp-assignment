// Q15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int doSomething(int *x, int*y)
{
	int temp = *x;
	*x = *y * 5;
	*y = temp * 3;
	return*x + *y;
}
int main()
{
	int x = 2, y = 3;
	cout << doSomething(&x, &y) << endl;
	cout << "x=" << x << "y=" << y;
	return 0;

}
