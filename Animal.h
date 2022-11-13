#pragma once

#define NAME_LENGHT 100
class Animal
{
public:
	int code;
	char name[NAME_LENGHT];

	void GetCode(int aCode);
	void PrintCode();
	void GetName(char aName[NAME_LENGHT]);
	void PrintName();
};