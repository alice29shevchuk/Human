#include "Human.h"
Human::Human(char* name, int age)
{
	this->name = name;
	this->age = age;
}
void Human::Print()
{
	std::cout << "Имя: " << this->name << "\nВозраст: " << this->age << "\n";
}

void Human::SetName(char* name)
{
	this->name = name;
}

void Human::SetAge(int age)
{
	this->age = age;
}
