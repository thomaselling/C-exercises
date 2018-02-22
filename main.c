#include <stdio.h>
#include "prime.h"
#include "gcd.h"

int main(int argc, char **argv) {

	int x, y;
	float avg;
	int euclid;

	printf("%s\n", "Enter first positive number:");
	scanf("%d",&x);
	printf("%s\n", "Enter second positive number:");
	scanf("%d",&y);

	printf("You typed in %d and %d\n", x, y);
	
	avg = (float)(x + y) / 2.0;
	printf("The average is: %f\n", avg);

	prime(x);
	prime(y);
	euclid = gcd(x, y);
	printf("The gcd is: %d\n", euclid);

	return 0;
}
