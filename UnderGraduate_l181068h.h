#pragma once
#include <iostream>
#include <string>
#include "Person_l181068.h"
using namespace std;

class Student : public Person {
	float cgpa;
public:
	Student(float, string, string, int);
	~Student();
	float getcgpa();
	void setcgpa(float);

	void printStudent();
};