#include "Student.h"
Student::Student(char* name, int age, double stipendia) : Human(name, age)
{
	this->stipendia = stipendia;
}

void Student::Print()
{
	std::cout << "Имя: " << this->name << "\nВозраст: " << this->age << "\nСтипендия: " << this->stipendia << "\n";
}
