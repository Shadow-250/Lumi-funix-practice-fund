/*
*  This is Lab No.4, created by Nguyen Hoang Phung
*  Date of creation: 9/8/2020
*  Date of modified: 9/8/2020
*  Goal of this project: use operation bitwise
*/

#include "stdio.h"
#include "stdlib.h"

int main () {
  int number, check;
  scanf("%d", &number);
  check = number>>3 & 0x01;
  printf("Third bit of number is %d\n", check);
  return 0;
}
