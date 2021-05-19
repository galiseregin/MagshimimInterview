#ifndef FILES_H
#define FILES_H
#include <stdio.h>
#include <string.h>
/*PART A:
  -------*/

//student struct
typedef struct student
{
	char name[10];
	char id[9];
	int avg;
	
}student;

void structCopy(student* dest, student* src);//copies src struct values to dest struct values
FILE* createFile(student* students, int arrLen, char* fileName);//creates information file. returns pointer to this file.
void maxAvg(char* name);//checks max average in a given file


/*PART b:
  -------*/
void binaryCopy(char* srcPath);//makes a copy of exists picture in the directory "pictures".


#endif // FILES_H