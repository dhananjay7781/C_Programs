#include <stdio.h>

void main() {
	int x = 10;
	char ch = 'A';
	int y =20;
	char ch1 = 'B';

	int *iptr;
	char *cptr;
	iptr = &y;
	cptr = &ch1;
	printf("%d %c %p %p\n", x, ch, iptr, cptr);
}
