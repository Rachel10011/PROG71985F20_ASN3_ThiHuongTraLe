//PROG71985-F20
//Assignment 3
//Question 4
//by Thi Huong Tra Le  
//October 2020

#include <stdio.h>
#include "data.h"
#include <string.h>
#include <stdbool.h>


int main(void)
{
	NUMBER student1_number = createStudentNumber("2001021234");
	printStudentNumber(student1_number);

	NAME student1_name = createStudentName("Rachel", "Le", "N/A");
	int middle_name = strcmp(student1_name.middlename, "N/A");		//strcmp return 1 which make the middle_name true when it is equal N/A
	if (!middle_name)												//If middle_name is not true (student.middle name is not "N/A") print student ID without middle name
	{
		printStudentIDwithoutMiddleName(student1_name);
	}
	else
	{
		printStudentIDwithMiddleName(student1_name);					//otherwise print with middle name
	}
	NUMBER student2_number = createStudentNumber("2000157789");
	printStudentNumber(student2_number);


	NAME student2_name = createStudentName("Levi", "Valenzuela", "Ranjan");
	middle_name = strcmp(student2_name.middlename, "N/A");
	if (!middle_name)
	{
		printStudentIDwithoutMiddleName(student2_name);
	}
	else
	{
		printStudentIDwithMiddleName(student2_name);
	}


	NUMBER student3_number = createStudentNumber("2001123399");
	printStudentNumber(student3_number);

	NAME studen3_name = createStudentName("Mia", "Le", "Nguyen");
	middle_name = strcmp(studen3_name.middlename, "N/A");
	if (!middle_name)
	{
		printStudentIDwithoutMiddleName(studen3_name);
	}
	else
	{
		printStudentIDwithMiddleName(studen3_name);
	}


	NUMBER student4_number = createStudentNumber("1999050987");
	printStudentNumber(student4_number);

	NAME studen4_name = createStudentName("Jenna", "Valenzuela", "Gabon");
	middle_name = strcmp(studen4_name.middlename, "N/A");
	if (!middle_name)
	{
		printStudentIDwithoutMiddleName(studen4_name);
	}
	else
	{
		printStudentIDwithMiddleName(studen4_name);
	}


	NUMBER student5_number = createStudentNumber("2000086547");
	printStudentNumber(student5_number);

	NAME student5_name = createStudentName("Jason", "Gobna", "N/A");
	middle_name = strcmp(student5_name.middlename, "N/A");
	if (!middle_name)
	{
		printStudentIDwithoutMiddleName(student5_name);
	}
	else
	{
		printStudentIDwithMiddleName(student5_name);
	}

}
