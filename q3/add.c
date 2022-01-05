#include "add.h"
#include <stdio.h>

void adding( int array1[], int array2[], int array3[], int maxsize) 
{
	for (int i = 0; i < maxsize; i++) {
		//this step is unessary for the program but needed for testing 
		*(array3 +i)= (array1[i] + array2[i]);  //Ther pointer will point to every single sum value of array 1 and 2 then store it in array 3 
		printf("%d ", *(array3 + i));
	}
}