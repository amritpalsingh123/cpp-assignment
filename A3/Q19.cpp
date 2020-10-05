// Q19.cpp : This file contains the 'main' function. Program execution begins and ends there.


// Amritpal Singh

#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	int n;
	float numHoursbiology,numHoursprogramming, totalbiology,totalprogramming, averagebiology,averageprogramming;
	int student, day = 0;	// these are the counters for the loops

	cout << "This program will find the average number of hours a day"
		<< " that a student spent programming over a long weekend\n\n";
	cout << "How many students are there ?" << endl << endl;
	cin >> numStudents;
	cout << "Please enter the no of days in the long weekend" << endl;
	cin >> n;

	for (student = 1; student <= numStudents; student++)
	{
		totalprogramming = 0;
		totalbiology = 0;


		for (day = 1; day <= n; day++)
		{
			cout << "Please enter the number of hours worked by student "
				<< student << " on biology " << "on day" << day << "." << endl;
			cin >> numHoursbiology;
			cout << "Please enter the number of hourse worked by student" << student << "on programming" << "on day" << day << "." << endl;
			cin >> numHoursprogramming;
			totalbiology = totalbiology + numHoursbiology;
			totalprogramming = totalprogramming + numHoursprogramming;
		}

		averagebiology = totalbiology / n;
		averageprogramming = totalprogramming / n;
		cout << endl;
		if (averageprogramming > averagebiology)
		{
			cout << "The student" << student << "average spent the most time on programming " << "is" << averageprogramming << endl << endl << endl;
		}
		else
		{
			cout << "The student" << student << "average spent the most time on Biology " << "is" << averagebiology << endl << endl << endl;
		}
	}

	return 0;
}
