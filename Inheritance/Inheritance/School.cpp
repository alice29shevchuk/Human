#include "School.h"
School::School(char*name, int age, char* homework) : Human(name, age)
{
	this->homework = homework;
}

void School::Print()
{
	std::cout << "���: " << this->name << "\n�������: " << this->age << "\n�������� �������: ";
}
