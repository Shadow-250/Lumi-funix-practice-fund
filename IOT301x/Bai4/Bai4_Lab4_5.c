/*
*  This is Lab No.4, created by Nguyen Hoang Phung
*  Date of creation: 9/8/2020
*  Date of modified: 9/8/2020
*  Goal of this project: Use printf() give byte value byte ...
*/

#include "stdio.h"
#include "stdlib.h"

int main () {
  printf("Size of: \n");
  printf("Char:\t\t %ld\n", sizeof(char));
  printf("Int:\t\t %ld\n", sizeof(int));
  printf("Long:\t\t %ld\n", sizeof(long));
  printf("Long long: \t%ld\n", sizeof(long long));
  printf("Float:\t\t %ld\n", sizeof(float));
  printf("Double:\t\t %ld\n", sizeof(double));
  return 0;
}
