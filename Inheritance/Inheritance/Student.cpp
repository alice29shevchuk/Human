#include "Student.h"
Student::Student(char* name, int age, double stipendia) : Human(name, age)
{
	this->stipendia = stipendia;
}

void Student::Print()
{
	std::cout << "���: " << this->name << "\n�������: " << this->age << "\n���������: " << this->stipendia << "\n";
}
