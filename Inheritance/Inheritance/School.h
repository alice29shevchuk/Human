#pragma once
#include"Human.h"
class School:public Human
{
	char* homework;
public:
	School(char* name, int age, char* homework) : Human(name, age)
	{
		this->homework = homework;
	}
	void Print()
	{
		std::cout << "���: " << this->name << "\n�������: " << this->age << "\n�������� �������: ";
	}
};

