#include "Difference.h"
#include <stdio.h>

double getMax( double array[], int maxsize)				//find the maximum value in the array
{
	double maxNum = array[0];
	for (int i = 0; i < maxsize; i++)
	{	
		maxNum = array[i] > maxNum ? array[i] : maxNum;
	}
		return maxNum;
}

double getMin( double array[], int maxsize)				//find the minimum value in the array
{
	double minNum = array[0];
	for (int i = 0; i < maxsize; i++)
	{
		minNum = array[i] < minNum ? array[i] : minNum;
	}
	return minNum;
}

double difi(double x, double y)
{
	return (x-y);			//subtract the larger number to the smaller number to find the difference
}

