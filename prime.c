#include <stdio.h>
#include <math.h>
#include "prime.h"

void prime(int x) {

	if (x <= 1) {
		printf("%d is not prime\n", x);
		return; 
	}
	else if (x <= 3) {
		printf("%d is prime\n", x);
		return;
	}
	else if (x % 2 == 0 || x % 3 == 0) {
		printf("%d is not prime\n", x);
		return;
	}
	int limit = sqrt(x);
	int i = 5;
	while (i <= limit) {
		if (x % i == 0) {
			printf("%d is not prime\n", x);
			return;
		}
		i = i + 2;
	}
	printf("%d is prime\n", x);
	return; 
}
