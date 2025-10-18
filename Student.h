#pragma once
#include<iostream>
#include<string>
using namespace std;
//Abstraction of class(hiding complex details )
class student {
//private attributes for encapsulation
private:
	string name;
	int roll_no;
	int age;
	double gpa;
public:
//destructor:
//default constructor
	student();

//parameterized constructor with a default argument for gpa
	student(string n, int r, int a, double g=2.5);

//setter methods for encapsulation
	void setname(string n);
	void setroll_no(int r);
	void setage(int a);
	void setgpa(double g);

//getter methods for encapsulation
	string getname();
	int getroll_no();
	int getage();
	double getgpa();
//Abstraction done for display and grade calculation function
//display function for student record
	void display();

//function for calculating grade
	void calculategrade();

//destructor 
	~student();
};
