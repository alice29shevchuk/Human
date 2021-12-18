#pragma once
#include"Human.h"
class Worker:public Human
{
	double salary;
public:
	Worker(char* name, int age, double salary) : Human(name, age)
	{
		this->salary = salary;
	}
	void Print()
	{
		std::cout << "Имя: " << this->name << "\nВозраст: " << this->age << "\nЗарплата: " << this->salary << "\n";
	}
};

