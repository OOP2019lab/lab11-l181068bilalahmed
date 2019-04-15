#include "Faculty_l181068.h"

Faculty :: Faculty (int courses, int extensions, string fname, string lname, int age): Person(fname, lname, age){
	no_of_courses = courses;
	extension = extensions;
	cout << "Faculty Constructor was called" << endl;
}

Faculty :: ~Faculty(){
	no_of_courses = -1;
	extension = -1;
}

int Faculty :: getcourses(){
	return no_of_courses;
}

int Faculty :: getex(){
	return extension;
}

void Faculty :: setcourses(int courses){
	no_of_courses = courses;
}

void Faculty :: setex(int ext){
	extension = ext;
}

void Faculty :: printFaculty(){
	cout << "Faculty Member name: " << getfname() << " " << getlname() << ", Age: " << age << ", No of Courses :" << no_of_courses << ", Ext." << extension << endl; 
}