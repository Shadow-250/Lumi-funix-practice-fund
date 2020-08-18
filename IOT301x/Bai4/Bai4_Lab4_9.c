/*
*  This is Lab No.4, created by Nguyen Hoang Phung
*  Date of creation: 10/8/2020
*  Date of modified: 10/8/2020
*  Goal of this project: Calculate salary of staff.
*/

#include "stdio.h"
#include "stdlib.h"

int main () {
  char idStaff[20];
  int totalTimeWork, salaryHour, salaryMount;
  printf("Input ID Staff: \n");
  scanf("%s", idStaff);

  printf("Input salaryHour: \n");
  scanf("%d", &salaryHour);

  printf("Input Total Time of Work \n");
  scanf("%d", &totalTimeWork);

  printf("Salary of Mount : %d\n", totalTimeWork * salaryHour);

  return 0;
}
