#include <stdio.h>

void main() {
	int a = 30;
	char b = 'D';
	int c = 80;
	printf("%d %c %d\n", a, b, c);

	int *iptr1, *iptr2;
	iptr1 = &a;
	iptr2 = &a;
	printf("%p %p %d %d\n", iptr1, iptr2, *iptr1, *iptr2);
		a = 70;
	printf("%p %p %d %d\n", iptr1, iptr2, *iptr1, *iptr2);
	iptr2 = &c;
	printf("%p %d\n", iptr2, *iptr2);
	printf("%d\n", c);
}
