/*
*  This is Lab No.3, created by Nguyen Hoang Phung
*  Date of creation: 8/8/2020
*  Date of modified: 8/8/2020
*  Goal of this project: Create enum 2
*/

#include "stdio.h"
#include "stdlib.h"
enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };

int main() {
  enum Company google = GOOGLE;
  enum Company facebook = FACEBOOK;
  enum Company xerox = XEROX;
  enum Company yahoo = YAHOO;
  enum Company ebay = EBAY;
  enum Company microsoft = MICROSOFT;


  printf("The value of google is: %d\n", google);
  printf("The value of google is: %d\n", facebook);
  printf("The value of google is: %d\n", xerox);
  printf("The value of google is: %d\n", yahoo);
  printf("The value of google is: %d\n", ebay);
  printf("The value of google is: %d\n", microsoft);

  return 0;
}
