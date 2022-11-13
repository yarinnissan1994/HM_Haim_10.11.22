#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Base.h"
#include "SubBase.h"
#include "Runner.h"
#include "father.h"
#include "son.h"
#pragma warning (disable : 4996)

int main()
{
	// -------task1-------
	printf("\n***Q1***\n");
	SubBase SubBase1;
	SubBase1.basic1();
	SubBase1.basic2();

	// -------task2-------
	Runner Runner1;
	Runner1.run();

	// -------task3-------
	// insdie runner

	// -------task4-------
	printf("\n***Q4***\n");
	Father Father1;
	Father1.fatherStatus();

	Son Son1;
	Son1.fatherStatus();

}
