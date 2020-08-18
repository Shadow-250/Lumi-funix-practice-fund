/*
*  This is Lab No.7, created by Nguyen Hoang Phung
*  Date of creation: 11/8/2020
*  Date of modified: 11/8/2020
*  Goal of this project: Store number in array and show on terminal.
*/

#include "stdio.h"
#include "stdlib.h"

int main() {
  int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int i = 8; i >= 0; i--) {
    printf("%d\n", arr[i]);
  }
  return 0;
}
