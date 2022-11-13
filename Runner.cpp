#include "Runner.h"
#include <string.h>
#include <iostream>
#include <stdio.h>
#pragma warning(disable:4996)

void Runner::run() {

	printf("\n***Q2***\n");
	list = new SubBase;
	list->basic2();

	printf("\n***Q3***\n");
	cat = new Cat;
	dog = new Dog;

	printf("\n***Cat***\n");
	cat->age = 2;
	cat->code = 100;
	strcpy_s(cat->name, "Chidey");
	cat->AddCatGurimCount();
	cat->AddCatGurimCount();
	cat->AddCatGurimCount();
	cat->AddCatGurimCount();
	dog->AddDogGurimCount();
	cat->CatInfo();

	printf("\n***Dog***\n");
	dog->code = 50;
	strcpy_s(dog->name, "Kaza");
	dog->AddDogGurimCount();
	dog->AddDogGurimCount();
	dog->AddDogGurimCount();
	dog->DogInfo();

	delete list;
	delete cat;
	delete dog;


}
