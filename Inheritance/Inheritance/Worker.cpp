#include "Worker.h"
Worker::Worker(char* name, int age, double salary):Human(name, age)
{
	this->salary = salary;
}
void Worker::Print()
{
	std::cout << "���: " << this->name << "\n�������: " << this->age << "\n��������: " << this->salary << "\n";
}
