#pragma once
#include"Human.h"
class Student:public Human
{
	double stipendia;
public:
	Student(char* name, int age, double stipendia) : Human(name,age)
	{
		this->stipendia = stipendia;
	}
	void Print()
	{
		std::cout << "���: " << this->name << "\n�������: " << this->age << "\n���������: "<<this->stipendia<<"\n";
	}
};

