/*
*  This is Lab No.4, created by Nguyen Hoang Phung
*  Date of creation: 10/8/2020
*  Date of modified: 10/8/2020
*  Goal of this project: Input 4 float number and calculate square of each number .
*/

#include "stdio.h"
#include "stdlib.h"

int main() {
  int num1, num2, num3, num4;
  printf("Input number 1:  \n");
  scanf("%d", &num1);

  printf("Input number 2:  \n");
  scanf("%d", &num2);

  printf("Input number 3:  \n");
  scanf("%d", &num3);

  printf("Input number 4:  \n");
  scanf("%d", &num4);

  printf("First Number: %d\n", num1 * num1);
  printf("Second Number: %d\n", num2 * num2);
  printf("Third Number: %d\n", num3 * num3);
  printf("Fourth Number: %d\n", num4 * num4);

  return 0;
}
