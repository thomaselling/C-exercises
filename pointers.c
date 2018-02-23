#include <stdio.h>
#include <stdint.h>

int main() {

	unsigned int x = 1;
	unsigned int y = 2;
	unsigned int *p;

	// p set to address of x or "pointer p is address of x".
	p = &x;
	printf("p = %p\n", p);
	printf("&x = %p\n\n", &x);

	// y set to dereferenced pointer p.
	// since p is pointing to address of x, dereferencing p gives 1.
	y = *p;
	printf("y = %u\n\n", y);

	// "dereferenced pointer p is set to 0".
	// why is x set to 0 now?
	// dereferenced pointer p is x, so x = 0
	// '*p = 0' is same as 'x = 0'
	*p = 0;
	printf("*p = %u\n", *p);
	printf("x = %u\n\n", x);

	// p is set to address of y
	p = &y;
	printf("p = %p\n", p);
	printf("&y = %p\n\n", &y);

	// y is 2 and x is still 0
	*p = 2;
	printf("*p = %u\n", *p);
	printf("y = %u\n", y);
	printf("x = %u\n\n", x);

	// y is now 3
	++*p; // the value of p is incremented by 1
	printf("y = %u\n\n", y);

	// y is now 4
	(*p)++; // the value of p is incremented by 1
	printf("y = %u\n\n", y);
}