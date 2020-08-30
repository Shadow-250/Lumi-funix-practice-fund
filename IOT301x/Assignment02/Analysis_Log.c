/*
*  This is Assignment No.2, created by Nguyen Hoang Phung
*  Date of creation: 29/8/2020
*  Date of modified: 29/8/2020
*  Goal of this project: Process information of sensor save at center controllers.
* Compile use gcc : gcc assignment1.c -o assignment -lm
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "log.txt"
#define MAXLENGTHFILE 5000

char fileStr[MAXLENGTHFILE];
/*
Input: {Pointer} FILE
Output: {Integer} status
*/
int fileToStr (char* str) {
  int status;
  FILE *fp = NULL;

  fp = fopen(FILENAME, "r");
  if (fp == NULL) {
    printf("File does not exist\n");
    return -1;
  }
  status = fread(str, MAXLENGTHFILE, 1, fp);

  // printf("Contents of file log.txt: \n%s", str);

  fclose(fp);
  fp = NULL;
  return status;
}

void main () {
  // Test fileToStr function
  printf("%d\n", fileToStr(fileStr));
  printf("%s\n", fileStr);

  for(int i = 0; i < len(fileStr), )
}
