//pointers to pointers
#include <stdio.h>

void main() {
	

	char ch = 'A';
	char *cptr1 = &ch;
	char **cptr2 = &cptr1;

	printf("%c\n", ch);
	printf("%c\n", *cptr1);
	printf("%c\n", **cptr2);
}
