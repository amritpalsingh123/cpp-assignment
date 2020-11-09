// Assignment 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>
#include <cstdio>
using namespace std;

class Student
{
protected:
	string student_name;
	string student_number;
	int age;
public:
	Student() {}
	Student(string name,string number,int year)
	{
		this->student_name = name;
		this->student_number;
		this->age = age;
	}
	void printStudent()
	{
		cout << "Student Name:" << student_name << endl;
		cout << "Student Number:" << student_number << endl;
		cout << "Student Age: " << age << endl;
	}
	string getStudentName()
	{
		return student_name;
	}
	string getStudentNumber()
	{
		return student_number;
	}
	int getStudentAge()
	{
		return age;
	}
};
class KpuStudent : public Student
{
protected:
	string major;
	string campus;
	int year;
public:
	KpuStudent() :Student() {}
	KpuStudent(string name, string number, int age, string m, string c, int year) :Student(name, number, age)
	{
		this->major = m;
		this->campus = c;
		this->year = year;
	}
	void setKpuStudent(string name, string number, int age, string m, string c, int year)
	{
		this->major = m;
		this->campus = c;
		this->year = year;
		Student(name, number, age);
	}
	void printKpuStudent()
	{
		cout << "===================Details for KpuStudent=============" << endl;
		printStudent();
		cout << "Major:" << major << endl;
		cout << "campus" << campus << endl;
		cout << "Year" << year << endl;
		cout << "=============End==============" << endl;
	}
	string getMajor()
	{
		return major;
	}
	string getCampus()
	{
		return campus;
	}
	int getYear()
	{
		return year;
	}
};
int main()
{
	//input from constructor
	KpuStudent ks("Sam","100385307"
		"Computer Information system", 2020);
	ks.printKpuStudent();
	Student s("John", "100385307", 23);
	cout << endl;
	cout << "Age of" << s.getStudentName() << " is:" << s.getStudentAge() << endl;
	cout << "Age of" <<ks.getStudentName() << " is:" << ks.getStudentAge() << endl;
	cout << endl;
	KpuStudent ks2;
	string sname, snumber, ksmajor, kscampus;
	int sage, ksyear;
	cout << "Enter Your Name:";
	getline(cin, sname);//used to get a string in console with space
	cout << "Enter Your Student number:";
	cin >> snumber;
	cout <<"Enter Your Age:";
	cin >> sage;
	cout << "Enter Your Major:";
	cin >> ksmajor;
	cout << "Enter Your Campus:";
	cin >> kscampus;
	cout << "Enter Your Year:";
	cin >> ksyear;
	//input from function
	ks2.setKpuStudent(sname, snumber, sage, ksmajor, kscampus, ksyear);
	ks2.printKpuStudent();

}

    
