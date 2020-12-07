// Assignment 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	string fileName;
	string t;
	int n, i = 0;
	//ask the user the name of the file
	cout << "Enter File Name:";
	cin >> fileName;
	// ask the user for an integer
	cout << "Enter the integer:";
	cin >> n;
	//open the file in read mode
	ifstream in(fileName.c_str());
	// if the file is not open then print the error and exit
	if (!in.good())
	{
		cout << "ERROR : Invalid file Name";
		exit(0);
	}
	//read until end of the file is reached or 'n' number of lines
	while ((!in.eof()) && (i < n))
	{
		// read a line from the file
		getline(in, t);
		// display the line to console
		cout << "t" << endl;
		// increment number of lines read
		i++;
	}
	// if the file contains less number of lines than user asked for the 
	// we print the message
	if (i < n)
		cout << endl << "Enter File is Displayed\n";

}
