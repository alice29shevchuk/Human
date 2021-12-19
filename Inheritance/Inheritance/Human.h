#pragma once
#include<iostream>
class Human
{
protected:
	char* name;
	int age;
public:
	Human(char*, int);
	void Print();
	void SetName(char* name);
	void SetAge(int age);
};

