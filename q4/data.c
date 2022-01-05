#include <stdio.h>
#include "data.h"
#include <string.h>

#define MAXSTRLEN 50
#define MAXNUMLEN 11

NUMBER createStudentNumber(char studentNumber[MAXNUMLEN])
{
	NUMBER number;
	strncpy_s(number.studentNumber, MAXNUMLEN, studentNumber, MAXNUMLEN);
	return number;
}

NAME createStudentName(char first_name[MAXSTRLEN], char last_name[MAXSTRLEN], char middle_name[MAXSTRLEN])
{
	NAME name;
	strncpy_s(name.firstname, MAXSTRLEN, first_name, MAXSTRLEN);
	strncpy_s(name.lastname, MAXSTRLEN, last_name, MAXSTRLEN);
	strncpy_s(name.middlename, MAXSTRLEN, middle_name, MAXSTRLEN);
	return name;
}

void printStudentNumber(NUMBER student_number)
{
	printf("%s -- ", student_number.studentNumber);
}

void printStudentIDwithMiddleName( NAME student_name)
{
		printf(" %s,%s %s.\n",
			student_name.lastname, student_name.firstname, student_name.middlename);
}

void printStudentIDwithoutMiddleName( NAME student_name)
{
	printf(" %s, %s\n",
		student_name.lastname, student_name.firstname);
}

