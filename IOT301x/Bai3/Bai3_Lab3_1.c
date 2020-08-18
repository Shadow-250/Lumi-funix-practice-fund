/*
*  This is Lab No.3, created by Nguyen Hoang Phung
*  Date of creation: 8/8/2020
*  Date of modified: 8/8/2020
*  Goal of this project: calculate area and perimeter of rectangle
*/

#include "stdio.h"
#include "stdlib.h"

int main() {
  // create variable to receive input of width and height
  float rectHeight= 0, rectWidth = 0;
  // Create var to store perimeter and area of rectangle
  float perimeterRect = 0, areaRect = 0;
  // Input
  printf("Input height of rectangle: \n");
  scanf("%f", &rectHeight);

  printf("Input width of rectangle: \n");
  scanf("%f", &rectWidth);

  // calculate
  areaRect = rectHeight * rectWidth;
  perimeterRect = 2 * (rectHeight + rectWidth);

  printf("Area of rectangle is %1.2f \n", areaRect);
  printf("Perimeter of rectangle is %1.2f \n", perimeterRect);

  return 0;
}
