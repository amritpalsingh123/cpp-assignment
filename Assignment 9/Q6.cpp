// Question 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Stockprices
{
public:
	int prices[7];
	Stockprices(int arr[])
	{
		for (int i = 0; i < 7; ++i)
			prices[i] = arr[i];
	}
	int average()
	{
		int sum = 0, avg = 0;
		for (int i = 0; i < 7; i++)
		{
			if (prices[i] > 5000 || prices[i] < 0)
				cout << "Stock prices are invalid" << endl;
			sum += prices[i];
		}
		avg = sum / 7;
		return avg;
	}
};
int main()
{
	int arr[7] = { 200,3000,40,1000,89,24,45 };
	Stockprices obj(arr);
	try
	{
		int ans = obj.average();
		cout << ans;
	}
	catch (const char*error_msg)
	{
		cerr << error_msg << endl;

	}
	return 0;

}
