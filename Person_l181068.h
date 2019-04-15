#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person{
	string f_name;
	string l_name;
protected:
	int age;
public:
	Person(string, string, int);
	~Person();
	string getfname();
	string getlname();
	int getage();

	void setfname(string);
	void setlname(string);
	void setage(int);

	void printInformation();

};