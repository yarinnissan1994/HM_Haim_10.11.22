#include "Cat.h"
#include <string.h>
#include <iostream>
#include <stdio.h>
#pragma warning(disable:4996)

void Cat::AddCatGurimCount() {
	CatGurimCount++;
}


void Cat::PrintCatGurimCount() {
	printf("you have %d kittens\n", CatGurimCount);
}

void Cat::CatInfo() {
	PrintCode();
	PrintName();
	PrintCatGurimCount();
	printf("%s age: %d\n", name, age);
}
