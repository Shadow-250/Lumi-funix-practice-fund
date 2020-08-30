/*
*  This is Lab No.7, created by Nguyen Hoang Phung
*  Date of creation: 11/8/2020
*  Date of modified: 11/8/2020
*  Goal of this project: Primary number.
*/

#include<stdio.h>

int main(){
  int numbr,k,remark;
  printf(" The prime numbers between 1 and 100 : \n");
  for(numbr=2;numbr<=100;++numbr) {
    remark=0;
    for(k=2;k<=numbr/2;k++){
      if((numbr % k) == 0){
        remark++;
        break;
      }
    }
    if(remark==0)
      printf("%d ",numbr);
    }
    printf("\n");
   return 0;
  }
