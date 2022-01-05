//PROG71985-F20
//Assignment 3
//Question 1
//by Thi Huong Tra Le  
//October 2020

#include <stdio.h>
#include <stdbool.h>
#include "larger.h"

bool max(double, double, double*);

int main(void)
{
	double num1 = 1;
	double num2 = 2;
	double answer;
	answer = largerOf(num1, num2); 
		printf("The larger value is %f\n", answer);

	//Test case

	double maximum;
	if (max(4, 8, &maximum))
		printf("pass 1 (4,8):%f\n",maximum);

	if (max(-4, -8, &maximum))
		printf("pass 2 (-4,-8): %f\n", maximum);

	if (max(1.5, 3.8, &maximum))
		printf("pass 3 (1.5,3.8): %f\n", maximum);

	if (max(-8.3, -0.8, &maximum))
		printf("pass 4 (-8.3,-0.8): %f\n", maximum);

	if (max(19, 9.8, &maximum))
		printf("pass 5 (19,9.8): %f\n", maximum);

	if (max(-4, 5, &maximum))
		printf("pass 6 (-4,5): %f\n", maximum);

	return 0;
}

bool max(double x, double y, double* maximum)
{
	if (x == y)
		return false;
	else
	{
		if (x > y)
			*maximum = x;
		else
			*maximum = y;
		return true;
	}
}