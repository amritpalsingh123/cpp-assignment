/ Q21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class payroll
{
private:
	float no_of_hours_worked, total_pay;
public:
	void getgrosspay(int i)
	{
		cout << "Enter no of hours not more than 60 \n";
		cin >> no_of_hours_worked;
		if (no_of_hours_worked < 60)
		{
			total_pay = 160 * no_of_hours_worked;
			cout << "The gross pay of employee " << i + 1 << "is" << total_pay;
		}
		else
		{
			cout << "Invalid input\n";
		}
	}
};
int main()
{
	payroll employee[7];
	for (int i = 0; i < 7; i++)
	{
		employee[i].getgrosspay(i);

	}
}
   
