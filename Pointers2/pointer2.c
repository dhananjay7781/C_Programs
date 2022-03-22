//trelational opertator on pointers

#include <stdio.h>

void main() {
	int x = 10;
	int y = 10;
	int *iptr1 = &x;
	int *iptr2 = &y;
	printf("%p\n", iptr1);
	printf("%p\n", iptr2);
	if(*iptr1 <= *iptr2){
		printf("True");
	}else{
		printf("False");
	}
}
