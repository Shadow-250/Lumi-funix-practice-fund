/*
*  This is Lab No.4, created by Nguyen Hoang Phung
*  Date of creation: 9/8/2020
*  Date of modified: 9/8/2020
*  Goal of this project: use operation bitwise
*/

#include "stdio.h"
#include "stdlib.h"

int main () {
  int number;
  scanf("%d", &number);
  number = number | 0x01<<5;
  printf("After set %x\n", number);
  return 0;
}
