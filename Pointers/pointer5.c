//storing adress in int instead of pointer
#include <stdio.h>

void main() {
	int x = 514;
//	int y = 11;
	char ch = 'A';
//	char ch1 = 'B';
	int *iptr;
	char *cptr;
	iptr = &ch;
	cptr = &x;
	printf("%p %p\n", cptr , iptr);
//	printf("%d %c\n", x , ch);
	printf("%c %d\n", *iptr , *cptr);
//	printf("%c\n", y);
//	printf("%d\n", ch1);
}
