/*
*  This is Lab No.9, created by Nguyen Hoang Phung
*  Date of creation: 30/8/2020
*  Date of modified: 30/8/2020
*  Goal of this project: string length, string cat, string cmp.
*/

#include <stdio.h>
#include <string.h>

int main (void) {
   char string[] = "bca";
   char temp;

   int i, j;


   int size = strlen(string);

   printf("Before arangement: %s \n", string);

   for (i = 0; i < size-1; i++) {
      for (j = i+1; j < size; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }

   printf("\nAfter arrangement %s \n", string);
   return 0;
}
