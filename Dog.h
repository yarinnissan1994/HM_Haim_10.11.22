#pragma once
#include "Animal.h"
class Dog :
    public Animal
{
private:
	int GurimCount = 0;
public:
	void AddDogGurimCount();
	void PrintDogGurimCount();
	void DogInfo();
};

