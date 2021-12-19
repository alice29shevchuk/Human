#include "Worker.h"
Worker::Worker(char* name, int age, double salary):Human(name, age)
{
	this->salary = salary;
}
void Worker::Print()
{
	std::cout << "Имя: " << this->name << "\nВозраст: " << this->age << "\nЗарплата: " << this->salary << "\n";
}
