/*
*  This is Lab No.6, created by Nguyen Hoang Phung
*  Date of creation: 11/8/2020
*  Date of modified: 11/8/2020
*  Goal of this project: Input number form keyboard for guess number have give before.
*/

#include "stdio.h"
#include "stdlib.h"

int main () {
  int secretNumber = 90;
  int guessNumber = 0;

  while (guessNumber != secretNumber) {
    printf("Please input the number your think that right: \n");
    printf("Tips:\t It\'s the number that have 2 number :V \n");
    scanf("%d", &guessNumber);
  }
  printf("Congratulation, Your Guess Number that is secret Number !!!\n");
}
