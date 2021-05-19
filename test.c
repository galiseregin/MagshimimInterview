#include "files.h"
#include <stdio.h>

int main(void)
{
	printf("Testing results:\nText files:\n-----------\n");
	FILE* file;
	student temp;
	student studArr[4] = { 0 };

	//studeny #1
	strcpy(temp.name, "shmoolik");
	strcpy(temp.id, "111111111");
	temp.avg = 81;
	structCopy(&studArr[0], &temp);
	//studeny #2
	strcpy(temp.name, "yahav");
	strcpy(temp.id, "222222222");
	temp.avg = 95;
	structCopy(&studArr[1], &temp); 
	//studeny #3
	strcpy(temp.name, "liron");
	strcpy(temp.id, "333333333");
	temp.avg = 88;
	structCopy(&studArr[2], &temp);
	//studeny #4
	strcpy(temp.name, "ran");
	strcpy(temp.id, "444444444");
	temp.avg = 90;
	structCopy(&studArr[3], &temp);

	FILE* fptr = createFile(studArr, 4, "studentsGrades.txt");
	maxAvg("studentsGrades.txt");

	printf("\nBinary files:\n-------------\n");
	binaryCopy("pictures1.jpg");
	return 0;
}