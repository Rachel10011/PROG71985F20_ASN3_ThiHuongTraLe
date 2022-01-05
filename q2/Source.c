//PROG71985-F20
//Assignment 3
//Question 2
//by Thi Huong Tra Le  
//October 2020

#include <stdio.h>
#include "Difference.h"
#include <stdbool.h>
#define MAXSIZE 5

bool difference(double, double, double*);

int main(void)
{

	double result;
	double values[] = { 1,2,3,4,5 };

	double maxValue = values[0];
	double minValue = values[0];
	
	for (int i = 0; i < MAXSIZE; i++)
	{
		maxValue = values[i] > maxValue ? values[i] : maxValue;
	}																					//find the max number in the array
	printf("The largest element is: %.2lf\n", maxValue);

	for (int i = 0; i <MAXSIZE; i++)
	{
		minValue = values[i] < minValue ? values[i] : minValue;
	}																					//find the max number in the array
	printf("The smallest element is: %.2lf\n", minValue);

	result = difi(maxValue, minValue);							
	printf("The difference between the maxinmum value and the minimum value of the array is %.2lf\n", result);

	//Test case

	double answer;
	if (difference(9,1,&answer))
		printf("pass 1 (9,1):%f\n", answer);

	if (difference(-4, -8, &answer))
		printf("pass 2 (-4,-8): %f\n", answer);

	if (difference(3.8, 1.5, &answer))
		printf("pass 3 (3.8,1.5): %f\n", answer);

	if (difference(-0.3, -4.8, &answer))
		printf("pass 4 (-0.3,-4.8): %f\n", answer);

	if (difference(19, 9.8, &answer))
		printf("pass 5 (19,9.8): %f\n", answer);

	if (difference( 5,-4, &answer))
		printf("pass 6 (5,-4): %f\n", answer);

	return 0;
}

bool difference(double max, double min, double * result)
{
	if ((max - min) == difi(max, min))
	{
		*result = max - min;
		return true;
	}
	else
		return false;
	
}