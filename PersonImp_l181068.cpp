#include "Person_l181068.h"

Person :: Person(string n, string ln, int a){
	f_name = n;
	l_name = ln;
	age = a;
	cout << "Person Constructor was invoked"<< endl;
}

Person :: ~Person(){
	f_name = "";
	l_name = "";
	age = -1;
	cout << "Person Destructor was invoked" << endl;
}

string Person :: getfname(){
	return f_name;
}

string Person :: getlname(){
	return l_name;
}

int Person :: getage(){
	return age;
}

void Person :: setfname(string fname){
	f_name = fname;
}

void Person :: setlname(string lname){
	l_name = lname;
}

void Person :: setage(int a){
	age = a;
}

void Person :: printInformation(){
	cout << f_name << " " << l_name << " is " << age << " years old" << endl;
}