#include <stdio.h>

int gcd(int x, int y) {
	
	int a, b;
	int remainder;

	if (x >= y) {
		a = x;
		b = y;
	}
	else {
		a = y;
		b = x;
	}

	if (a == 0) {
		return b;
	} 
	else if (b == 0) {
		return a;
	}
	remainder = a % b;

	return gcd(b, remainder);
}
