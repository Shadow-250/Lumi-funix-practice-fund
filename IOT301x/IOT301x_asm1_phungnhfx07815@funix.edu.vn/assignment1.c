/*
*  This is Assignment No.1, created by Nguyen Hoang Phung
*  Date of creation: 18/8/2020
*  Date of modified: 18/8/2020
*  Goal of this project: Triangle.
* Compile use gcc : gcc assignment1.c -o assignment -lm
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Input Location of point first and second
// Return the length of triangle edge a to b
double length_triangle_edge(double a[2], double b[2]) {
  return sqrt((a[0] - b[0])*(a[0]-b[0]) + (a[1]-b[1])*(a[1]-b[1]));
}


// Input length of edge Triangle
int is_triangle(double a, double b, double c) {
  return a + b <= c ? 0 : (a +c <= b) ? 0 : (b + c <= a) ? 0 : 1;
}

//  Calculate the angle of the triangle
// angle at x1
//  vectorAB * vectorAC / (lengtAB * lengthAC)
// unit : degree
double angleAtX1(double x1[2], double x2[2], double x3[2]) {
  double angle = acos(((x1[0] - x2[0])*(x1[0] - x3[0]) + (x1[1] - x2[1])*(x1[1] - x3[1])) / (length_triangle_edge(x1, x2) * length_triangle_edge(x1, x3)));
  return angle * 360.0 / (2 * 3.14);
}

// Area of triangle 1/2 abs(x1y2 - x2y1);
double abs_of_double(double x) {
  return x > 0 ? x : -x;
}
double area(double x1[2], double x2[2], double x3[2]) {
  return 0.5 * abs_of_double((x1[0] - x2[0])*(x1[1] - x3[1]) - (x1[0] - x3[0])*(x1[1] - x2[1]));
}

//  Length of height line triangle
//  input: edge opposite of point A
double height_triangeAt_A(double area, double x) {
  return (area * 2.0)/(x*1.0);
}

// is Special triangle
// return
// -1: normal triangle
// 0 :equilateral triangle
// 1 :isosceles triangle at A
// 2 :isosceles triangle at B
// 3 :isosceles triangle at C
int isSpecialEdge(double ab, double bc, double ca) {
 return ab == bc == ca ? 0 : ab == bc ? 2 : ab == ca ? 1 : bc == ca ? 3 : -1;
}


int main() {
  double a[2] = {1, 2};
  double b[2] = {2, 3};
  double c[2] = {4, 1};
  // Calculate
  double ab = length_triangle_edge(a, b);
  double bc = length_triangle_edge(b, c);
  double ca = length_triangle_edge(c, a);
  double angleA = angleAtX1(a,b,c);
  double angleB = angleAtX1(b,a,c);
  double angleC = angleAtX1(c,b,a);
  double areas = area(a, b, c);

  if(is_triangle(ab, bc, ca) == 1) {
    // request 1
    printf("This is triangle !! \n");
    // request 2
    printf("Length of AB %0.2lf\n", ab);
    printf("Length of BC %0.2lf\n", bc);
    printf("Length of CA %0.2lf\n", ca);
    printf("================ Angle ===================\n");
    printf("Angle at A %0.2lf\n", angleA);
    printf("Angle at B %0.2lf\n", angleB);
    printf("Angle at C %0.2lf\n", angleC);
    // request 3
    printf("============ is Special 01 ? =============\n");
    if (angleA > 90 || angleB > 90 || angleC > 90) {
      printf("Obtuse triangle !!! \n");
    } else if (angleA == 90 || angleB == 90 || angleC == 90) {
      printf("Right triangle !!! \n");
    } else if (angleA < 90 && angleB < 90 && angleC < 90) {
      printf("Pointed triangle !!! \n");
    }

    // request 4
    printf("============= is Special 02 ? ============\n");
    switch(isSpecialEdge(ab, bc, ca)) {
      case 0:
        printf("Equilateral triangle\n");
        break;
      case 1:
        angleA == 90 ? printf("Right triangle and Isosceles triangle at A\n") : printf("Isosceles triangle at A\n");
        break;
      case 2:
        angleB == 90 ? printf("Right triangle and Isosceles triangle at B\n") : printf("Isosceles triangle at B\n");
        break;
      case 3:
        angleC == 90 ? printf("Right triangle and Isosceles triangle at C\n") : printf("Isosceles triangle at C\n");
        break;
      default:
        printf("Normal Triangle \n");
        break;
    }
    // request 5
    printf("================= Area ===================\n");
    printf("Area of triangle: \t%0.2lf\n", areas);
    // request 6
    printf("================= Height =================\n");
    printf("Height of Triangle from point A: %0.2lf \n", height_triangeAt_A(areas, bc));
    printf("Height of Triangle from point B: %0.2lf \n", height_triangeAt_A(areas, ca));
    printf("Height of Triangle from point C: %0.2lf \n", height_triangeAt_A(areas, ab));
  } else {
    printf("This is not triangle !! \n");
  }



  return 0;
}
