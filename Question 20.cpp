// Q20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class cylinder
{
private:
	float height, radius;
public:
	void set()
	{
		cout << "Enter the radius of the cylinder \n"; // display the output to enter radius
		cin >> radius; // to enter radius
		cout << "Enter the height of the cylinder\n"; // display the output  to enter the height
		cin >> height; // to enter height
	}
	void get()
	{
		cout << "The radius is:" << radius << " and the height is :" << height;
	}
	float getvolume()
	{
		return 3.1459*radius*radius*height;
	}
};

int main()
{
	cylinder c;
	c.get();
	c.set();
	cout << "The volume of the cylinder is :" << c.getvolume();
}




    
