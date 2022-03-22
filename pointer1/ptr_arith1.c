#include <stdio.h>

void main() {
	int x = 10;
	int y = 20;
	int *iptr1 = &x;
	int *iptr2 = &y;

	int *iptr3;
	iptr3 = iptr1 + iptr2;
	printf("%p\n", iptr3);
}
