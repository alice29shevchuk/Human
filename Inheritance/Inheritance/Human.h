#pragma once
#include<iostream>
class Human
{
protected:
	char* name;
	int age;
public:
	Human(char*name,int age)
	{
		this->name = name;
		this->age = age;
	}
	void Print()
	{
		std::cout << "Имя: " << this->name << "\nВозраст: " << this->age << "\n";
	}

};

