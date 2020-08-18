/*
*  This is Lab No.5, created by Nguyen Hoang Phung
*  Date of creation: 11/8/2020
*  Date of modified: 11/8/2020
*  Goal of this project: Read temperature from keyboard and show state of weather.
*/

#include "stdio.h"
#include "stdlib.h"

#include "string.h"

int main() {
  int temp;
  printf("The temperature: \n");
  scanf("%d", &temp);

  char notification[50] = "Weather is";
  if (temp < 0) {
     strcat(notification, " super cold\n");
  } else if (temp >= 0 && temp < 10) {
    strcat(notification, " very cold\n");
  } else if (temp >= 10 && temp < 20) {
    strcat(notification, " cold\n");
  } else if (temp >= 20 && temp < 30) {
    strcat(notification, " Great\n");
  } else if (temp >= 30 && temp < 40) {
    strcat(notification, " Hot\n");
  } else {
    strcat(notification, " very Hot\n");
  }
  printf("%s",notification);
}
