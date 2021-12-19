#pragma once
#include"Human.h"
class School:public Human
{
	char* homework;
public:
	School(char*, int, char*);
	void Print();
};

