/*
*  This is Lab No.5, created by Nguyen Hoang Phung
*  Date of creation: 11/8/2020
*  Date of modified: 11/8/2020
*  Goal of this project: Input 2 int from keyboard and Does it is equal.
*/
#include "stdio.h"
#include "stdlib.h"

int main () {
  int check;
  float firstnumber, secondnumber;
  printf("Input first number and second number: \n");
  check = scanf("%f %f", &firstnumber, &secondnumber);

  if ((firstnumber != (int)firstnumber) || (secondnumber != (int)secondnumber) || (check != 2)) {
    printf("The input number is not Integer \n");
  } else {
    if (firstnumber == secondnumber) {
      printf("firtnumber equal secondnumber\n");
    } else {
      printf("Two number is not equal\n");
    }
  }

  return 0;
}
