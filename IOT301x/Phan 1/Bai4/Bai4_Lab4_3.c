/*
*  This is Lab No.4, created by Nguyen Hoang Phung
*  Date of creation: 9/8/2020
*  Date of modified: 9/8/2020
*  Goal of this project: use operation bitwise
*/

#include "stdio.h"
#include "stdlib.h"

int main () {
  int dayIn;
  int year, week;
  printf("Input Date: ");
  scanf("%d", &dayIn);

  year = dayIn/365;
  week = (dayIn - year*365)/7;
  dayIn = dayIn - year*365 - week*7;

  printf("Years:\t%d\n", year);
  printf("Weeks:\t%d\n", week);
  printf("Days:\t%d\n", dayIn);
  return 0;
}
