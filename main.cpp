#include"Student.h"
int main() {
	cout << "The Student Information record is:" << endl;
	// default constructor called 
	student s1;
	// entities modified with the help of setter methods
	s1.setname("Fatima");
	s1.setroll_no(8);
	s1.setage(19);
	s1.setgpa(3.99);
	s1.display();
	s1.calculategrade();
	cout << endl;
	// just default constructor called no modification in the entities
	student s2;
	s2.display();
	s2.calculategrade();
	cout << endl;
	// parameterized constructor called with default argument for gpa
	student s3("Faizan",5,19);
	s3.display();
	s3.calculategrade();
	cout << endl;
	//parameterized constructor called with no default argument
	student s4("Maryam", 6, 19,2);
	s4.display();
	s4.calculategrade();
	// parameterized constructor called and getter methods are used to access the entities
    student s5("Ayesha", 7, 20, 2.1);
    cout << "The Name is: " << s5.getname() << endl;
    cout << "The Roll No is: " << s5.getroll_no() << endl;
    cout << "The Age is: " << s5.getage() << endl;
    cout << "The Gpa is: " << s5.getgpa() << endl;
    s5.calculategrade();
	cout << endl;
	return 0;
}