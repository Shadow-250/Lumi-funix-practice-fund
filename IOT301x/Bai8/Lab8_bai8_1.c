/*
*  This is Lab No.8, created by Nguyen Hoang Phung
*  Date of creation: 15/8/2020
*  Date of modified: 15/8/2020
*  Goal of this project: Find the greatest common dividsor of number.
*/

#include "stdio.h"
#include "stdlib.h"

// Calculate GCD
int GCD(int u, int v) {
	int temp;
	
	while ( v != 0 ) {
		temp = u % v;
		u = v;
		v = temp;
	}
	
	return u;
}

// Find absolute value
float absoluteVal(float x) {
	if (x < 0) {
		x = -x;
	}
	return x;
}

// find square root
float squareRoot (float x) {
	const float epsilon = .00001;
	float guess = 1.0;
	float returnValue = 0.0;
	
	if (x < 0) {
		printf("Can't calculate Square root of negative number");
		returnValue = -1.0;
	} else {
		while (absoluteVal (guess * guess -x) >= epsilon) {
			guess = (x / guess + guess) / 2.0;
		}
		returnValue = guess;
	}
 	return returnValue;
}

int main() {
	// Test
	printf("Greatest Common Divisor:\t%d\n", GCD(2,4));
	printf("Absolute Value:\t\t\t%0.2f\n", absoluteVal(-10.0));
	printf("Square Root:\t\t\t%0.2f\n", squareRoot(9.0));
	return 0;
}
