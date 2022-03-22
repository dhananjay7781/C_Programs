#include <stdio.h>


int fact;
int factorial (int x) {


	fact = fact * factorial(x--);
}
void main() {
	int fact = factorial(5);
	printf("%d\n",fact);
}
