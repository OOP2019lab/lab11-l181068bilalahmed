#pragma once
#include <iostream>
#include <string>
#include "Person_l181068.h"

using namespace std;

class Faculty : public Person{
	int no_of_courses;
	int extension;
public:
	Faculty(int, int, string, string, int);
	~Faculty();
	int getcourses();
	int getex();
	void setcourses(int);
	void setex(int);
	void printFaculty();
}; 