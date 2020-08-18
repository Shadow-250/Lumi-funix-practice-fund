/*
*  This is Lab No.2, created by Nguyen Hoang Phung
*  Date of creation: 8/8/2020
*  Date of modified: 8/8/2020
*  Goal of this project: input and output data using scanf and prinf
*/

#include "stdio.h"
#include "stdlib.h"

int main() {
  char yourName;                          // create 1 variable have name yourName
  scanf("%s", &yourName);                 // use scanf() to receive data from keyboard
  printf("Hello %s. How are you?\n", &yourName);
  return 0;
}
