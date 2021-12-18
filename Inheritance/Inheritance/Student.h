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
		std::cout << "Имя: " << this->name << "\nВозраст: " << this->age << "\nСтипендия: "<<this->stipendia<<"\n";
	}
};

