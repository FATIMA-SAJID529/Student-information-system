#include"Student.h"
//function defination of default constructor
student::student() {
	name = "Amna";
	roll_no = 4;
	age = 19;
	gpa = 3;

}
//function defination of parameterized constructor
student::student(string n, int r, int a, double g) {
	name = n;
	roll_no = r;
	age = a;
	gpa = g;
}
//function defination of setter methods
void student::setname(string n) {
	name = n;
}
void student::setroll_no(int r) {
	roll_no = r;
}
void student::setage(int a) {
	age = a;
}
void student::setgpa(double g) {
	gpa = g;
}
//function defination of getter methods
string student::getname() {
	return name;
}
int student::getroll_no() {
	return roll_no;
}
int student::getage() {
	return age;
}
double student::getgpa() {
	return gpa;
}
//function defination of display function
void student::display() {
	cout << "The Name is : " << name << endl;
	cout << "The Roll No is : " << roll_no << endl;
	cout << "The Age is : " << age << endl;
	cout << "The Gpa is : " << gpa << endl;
}
//function defination of calculating grade function
void student::calculategrade()
{
	char grade;
	if (gpa >= 3.5) {
		grade = 'A';
	}
	else if (gpa >= 3) {
		grade = 'B';
	}
	else if (gpa >= 2.5) {
		grade = 'C';
	}
	else if (gpa >= 2) {
		grade = 'D';
	}
	else if (gpa >= 1.5) {
		grade = 'E';
	}
	else {
		grade = 'F';
	}
	cout << "The grade is:" << grade << endl;
}
//function defination of destructor
	student::~student() {
		cout << "The student record  has been destroyed for : " << name << endl;
	}