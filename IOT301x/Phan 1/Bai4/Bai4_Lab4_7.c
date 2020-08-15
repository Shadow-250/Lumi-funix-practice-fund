/*
*  This is Lab No.4, created by Nguyen Hoang Phung
*  Date of creation: 10/8/2020
*  Date of modified: 10/8/2020
*  Goal of this project: Input 4 float number and calculate average of 4 number .
*/

#include "stdio.h"
#include "stdlib.h"

int main() {
  float num1, num2, num3, num4;
  printf("Input number 1:  \n");
  scanf("%f", &num1);

  printf("Input number 2:  \n");
  scanf("%f", &num2);

  printf("Input number 3:  \n");
  scanf("%f", &num3);

  printf("Input number 4:  \n");
  scanf("%f", &num4);

  printf("Result: %1.2f\n", (num1 + num2 + num3 + num4)/4);

  return 0;
}
