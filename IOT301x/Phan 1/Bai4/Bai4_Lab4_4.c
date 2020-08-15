/*
*  This is Lab No.4, created by Nguyen Hoang Phung
*  Date of creation: 9/8/2020
*  Date of modified: 9/8/2020
*  Goal of this project: Input minute and change that to years and days.
*/

#include "stdio.h"
#include "stdlib.h"

int main () {
  int minutes;
  int days, years;
  printf("Input minutes: ");
  scanf("%d", &minutes);

  days = (minutes/60)/24;
  years = days/365;

  printf("Days:\t %d \nYears:\t %d \n", days, years);
  return 0;
}
