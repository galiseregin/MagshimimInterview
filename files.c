#include "files.h"
#include "string.h"


/*PART A:
  -------*/

void structCopy(student* dest, student* src){
    dest->avg = src->avg;
    strcpy(dest->id, src->id);
    strcpy(dest->name, src->name);
}

FILE* createFile(student* students, int arrLen, char* fileName){
    FILE* fp;
    fp = fopen(fileName, "w");
    if (!fp) {
        exit(0);
    }
    for (int i = 0; i < arrLen; i++){
        fprintf(fp, "Name:  %s\t", students[i].name);
        fprintf(fp, "Id:  %s\t", students[i].id);
        fprintf(fp, "Avg: %d\n", students[i].avg);
    }

    fclose(fp);
}

void maxAvg(char* fileName) {
    FILE* fp;
    int max=0,num=0;
    char bestStudent[10], str1[10], str2[10], str3[10], str4[10], str5[10];

    fp = fopen(fileName, "r");
    if (!fp) {
        exit(0);
    }
    while (!feof(fp)) {
        fscanf(fp, "%s %s %s %s %s %d", str1, str2, str3, str4, str5, &num);
        if (num > max) {
            max = num;
            strcpy(bestStudent, str2);
        }
    }
    printf("%s got the best average! \n", bestStudent);

}

  
   
    /*PART B:
  -------*/
void binaryCopy(char* srcPath)
{
    FILE* fs, * ft;
    int ch;

    fs = fopen(srcPath, "rb");
    if (fs == NULL){
        exit(0);
    }
    ft = fopen("pic1copy.jpg", "wb");
    while (1)
    {
        ch = fgetc(fs);
        if (ch == EOF) break;
        fputc(ch, ft);
    }
    fclose(fs);
    fclose(ft);
    printf("completed Copy\n");
}