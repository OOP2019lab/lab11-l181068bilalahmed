#include"UnderGraduate_l181068h.h"

Student :: Student(float c, string fname, string lname, int age) : Person(fname, lname, age){
	cgpa = c;
	cout << "Student Constructor was invoked" << endl;
}

Student :: ~Student(){
	cgpa = -1;
	cout << "Student Destructor was invoked" << endl;
}

float Student :: getcgpa(){
	return cgpa;
}
void Student :: setcgpa(float c){
	cgpa = c;
}

void Student :: printStudent(){
	cout << getfname() << " " << getlname() << " is " << age << " years old, his cgpa is " << cgpa << endl;
}