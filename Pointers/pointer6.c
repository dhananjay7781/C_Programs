
//storing adress in int instead of pointer
#include <stdio.h>

void main() {
	int x = 512;
	int y = 511;
	char ch = 'A';
	char ch1 = 'B';
	int *iptr;
	char *cptr;
	iptr = &ch;
	cptr = &x;
	printf("%p %p\n", cptr , iptr);
	printf("%d %c\n", x , ch);
	printf("%d %c\n", *iptr , *cptr);
//	printf("%c\n", y);
//	printf("%d\n", ch1);
}
