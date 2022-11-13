#pragma once
#include "Dog.h"
class Cat :
    public Dog
{
private:
	int CatGurimCount = 0;
public:
	int age = 0;
	void AddCatGurimCount();
	void PrintCatGurimCount();
	void CatInfo();
};

