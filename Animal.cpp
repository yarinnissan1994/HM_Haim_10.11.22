#include "Animal.h"
#include <string.h>
#include <iostream>
#include <stdio.h>
#pragma warning(disable:4996)

void Animal::GetCode(int aCode) {
	code = aCode;
}

void Animal::PrintCode() {
	printf("The code is : %d\n",code);
}

void Animal::GetName(char aName[NAME_LENGHT]) {
	strcpy_s(name, aName);
}
void Animal::PrintName() {
	printf("The name is : %s\n", name);
}
