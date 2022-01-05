//PROG71985-F20
//Assignment 3
//Question 4
//by Thi Huong Tra Le  
//October 2020

#pragma once
#define MAXSTRLEN 50
#define MAXNUMLEN 11


typedef struct number {
	char studentNumber[MAXNUMLEN];
}NUMBER;

typedef struct name {
	char firstname[MAXSTRLEN];
	char lastname[MAXSTRLEN];
	char middlename[MAXSTRLEN];
}NAME;

NUMBER createStudentNumber(char[]);

NAME createStudentName(char[], char[], char[]);

void printStudentNumber(NUMBER);

void printStudentIDwithMiddleName(NAME);

void printStudentIDwithoutMiddleName(NAME);

