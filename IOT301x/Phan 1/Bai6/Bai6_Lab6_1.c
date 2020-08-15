/*
*  This is Lab No.6, created by Nguyen Hoang Phung
*  Date of creation: 11/8/2020
*  Date of modified: 11/8/2020
*  Goal of this project: Input one integer from keyboard and show all even number form 1 to input number.
*/

#include "stdio.h"
#include "stdlib.h"

int main () {
  int inputNumber;

  printf("Please input number: \n");
  scanf("%d", &inputNumber);

  printf("============================== RESULT ============================");
  for (int i = 0; i <= inputNumber; i++) {
    if (i % 2 == 0) {
      printf("%d\n",i);
    }
  }
  return 0;
}
