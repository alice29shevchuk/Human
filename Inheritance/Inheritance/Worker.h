#pragma once
#include"Human.h"
class Worker:public Human
{
	double salary;
public:
	Worker(char*, int, double);
	void Print();
};

