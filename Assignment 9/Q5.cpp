// Question 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
using namespace std;

int main()
 {
  int max; // Max size of the array

  // Ask the user to enter an integer, and store the integer to the variable  int

  cout << "Enter an integer:";
  cin >> max;
  
  // Define a unique_ptr smart pointer, pointing to a dynamically allocated array of ints. The length of the array is equal to the value of max. 

  int *unique_ptr = new int(max);
  int i;
  for (i = 0; i <= max; i++)

	  // Ask the user to enter intergers for each value of the int array. 

  {
	  cout << "Enter element:";
	  cin >> unique_ptr[i];

  }


// Display all the values in the array.

  cout << " Element of array are: ";
  for (i = 0; i < max; i++)
	  cout << unique_ptr[i] << "\t";

 return 0;
 }
