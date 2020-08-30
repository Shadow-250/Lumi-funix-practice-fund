/*
*  This is Lab No.7, created by Nguyen Hoang Phung
*  Date of creation: 11/8/2020
*  Date of modified: 11/8/2020
*  Goal of this project: sort the numbers.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBER 101

int main () {
  int* arr;
  int n, temp;

  do {
    printf("Input n: \n");
    scanf("%d", &n);
  } while (n < 0);

  for(int i = 0; i < n; i++) {
    printf("Input number index %d: \n", i+1);
    scanf("%d", &arr[i]);
  }

  // decrease
  // for(int i = 0; i < n - 1; i ++) {
  //   for(int j = i + 1; j < n; j ++) {
  //     if (arr[i] < arr[j]) {
  //       temp = arr[i];
  //       arr[i] = arr[j];
  //       arr[j] = temp;
  //     }
  //   }
  // }

  // increase
  for(int i = 0; i < n - 1; i ++) {
    for(int j = i + 1; j < n; j ++) {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  printf("====================================\n");
  for(int i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
  }
  return 0;
}
