#include "Dog.h"
#include <string.h>
#include <iostream>
#include <stdio.h>
#pragma warning(disable:4996)

void Dog::AddDogGurimCount() {
	GurimCount++;
}

void Dog::PrintDogGurimCount() {
	printf("you have %d puppies\n", GurimCount);
}

void Dog::DogInfo() {
	PrintCode();
	PrintName();
	PrintDogGurimCount();
}