#pragma once
#include"Human.h"
class Student:public Human
{
	double stipendia;
public:
	Student(char*, int, double);
	void Print();
};

