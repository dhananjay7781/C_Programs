#include <stdio.h>

void main() {
	int x = 10;
	int *iptr= &x;
	char ch = 'A';
	char *cptr= &ch;
	float f = 20.5;
	float *fptr = &f;

	printf("%d %c %f\n",x , ch , f);                               //10 A 20.50000
	printf("%p %p %p\n", iptr , cptr, fptr);                           //adrresss of those types
	printf("%d %c %f\n", *iptr, *cptr, *fptr);                             //10 A 20.50000

}
