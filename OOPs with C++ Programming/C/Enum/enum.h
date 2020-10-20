#include<stdio.h>
typedef enum Course
{
	DAC =10,
	WIMC=20,
	DESD=30
}COURSE;

typedef struct Student
{
 int PRN;
 char name[40];
 COURSE course;
}STUDENT;

