/*
*  This is Lab No.3, created by Nguyen Hoang Phung
*  Date of creation: 8/8/2020
*  Date of modified: 8/8/2020
*  Goal of this project: Create enum 2
*/

#include "stdio.h"
#include "stdlib.h"
int main(int age, char const *argv[]) {
  /* code */
  printf("How old are you?\n");
  scanf("%d", &age);
  printf("Hello %s, %d years old\n", argv[1], age);
  return 0;
}
