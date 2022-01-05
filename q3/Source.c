//PROG71985-F20
//Assignment 3
//Question 3
//by Thi Huong Tra Le  
//October 2020

#include <stdio.h>
#include "add.h"
#include<stdbool.h>

#define MAXSIZE 5

bool areEqual(int*, int*);
int main(void)
{
	int arraySize = MAXSIZE;
	int array1[] = { 1,2,3,4,5 };
	int array2[] = { 0,1,2,3,4 };
	int answer[MAXSIZE];

	printf("The sum of the corresponding elements are: ");
	adding(array1, array2, answer, arraySize);
	printf("\n\n");


	//------------------test case-----------------------------

	int result[MAXSIZE];
	int arr1 []= { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };
	if (areEqual(arr1,arr2))
		printf("\tpass 1\t (1,3,5,7,9 and 2,4 ,6 ,8, 0)\n");

	int arr3[] = { 11,33,55,37,59 };
	int arr4[] = { 15,40,61,85,20 };
	if (areEqual(arr3, arr4))
		printf("\tpass 2\t (11,33,55,37,59 and 15,40,61,85,20)\n");

	int arr5[] = { 5,5,5,5,5};
	int arr6[] = {4,4,4,4,4};
	if (areEqual(arr5, arr6))
		printf("\tpass 3\t (5,5,5,5,5 and 4,4,4,4,4)\n");

	int arr7[] = { 5,0,0,0,0};
	int arr8[] = { 1,2,4,6,3 };
	if (areEqual(arr7, arr8))
		printf("\tpass 4\t (5,0,0,0 and 1,2,4,6,3)\n");
	
	return 0;

}
bool areEqual(int array1[], int array2[])
{
	int sizeArray=MAXSIZE;
	int answer[MAXSIZE];
	adding(array1, array2, answer, sizeArray);
	for (int i = 0; i < sizeArray; i++)
	{
		if(answer[i]  == (array1[i] + array2[i]))
			return true;
	}
}
