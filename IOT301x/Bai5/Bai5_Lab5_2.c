/*
*  This is Lab No.5, created by Nguyen Hoang Phung
*  Date of creation: 11/8/2020
*  Date of modified: 11/8/2020
*  Goal of this project: Input interger and check it even or not.
*/
#include "stdio.h"
#include "stdlib.h"

int main() {
  int input;
  printf("Please input number: \n");
  scanf("%d", &input);
  if (input % 2 == 0) {
    printf("Number is even\n");
  } else {
    printf("Number is not even\n");
  }
  return 0;
}
