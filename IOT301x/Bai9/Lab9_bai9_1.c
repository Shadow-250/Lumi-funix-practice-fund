/*
*  This is Lab No.9, created by Nguyen Hoang Phung
*  Date of creation: 30/8/2020
*  Date of modified: 30/8/2020
*  Goal of this project: string length, string cat, string cmp.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Length of String
int str_len(char *str) {
  int count_length = 0;
  while (*str != '\0') {
    count_length ++;
    str ++;
  }
  return count_length;
}

// String Cat
// return string
char *str_cat(char *destination, char *source) {
   int i, j, n1, n2;
   n1 = str_len(destination);
   n2 = str_len(source);
   j=0;
   for(i = n1; i < n1+n2; i++ ) {
      destination[i] = source[j];
      j++;
   }
   destination[i] = '\0';
   return destination;
}

bool str_Cmp(char a[], char b[]) {
  int n = 0;
	do {
		if (a[n] != b[n]) return false;
		n++;
	} while (a[n] != '\0' || b[n] != '\0');

	return true;
}

void main() {
  // printf("%d \n", str_Cmp("h", "w"));
  char* dest = "Hello\0";
  char* src = "World\0";
  printf("%s \n", str_cat(dest, src));
}
