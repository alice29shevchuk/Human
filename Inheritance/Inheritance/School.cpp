#include "School.h"
School::School(char*name, int age, char* homework) : Human(name, age)
{
	this->homework = homework;
}

void School::Print()
{
	std::cout << "Имя: " << this->name << "\nВозраст: " << this->age << "\nДомашнее задание: ";
}
