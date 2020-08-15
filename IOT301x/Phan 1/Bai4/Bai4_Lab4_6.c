/*
*  This is Lab No.4, created by Nguyen Hoang Phung
*  Date of creation: 9/8/2020
*  Date of modified: 9/8/2020
*  Goal of this project: Input 2 integer from keyboard and devide first int by second int.
*/

#include "stdio.h"
#include "stdlib.h"

int main () {
  int num1, num2;
  printf("Input number 1: \n");
  scanf("%d", &num1);

  printf("Input number 2: \n");
  scanf("%d", &num2);

  if (num2 != 0)
  {
    printf("Devide result: %d\n", num1/num2);
  } else {
    printf("Err: Num2 is zero. It\'s must be different the zero");
  }

  return 0;
}
