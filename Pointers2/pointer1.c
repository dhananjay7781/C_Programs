//trelational opertator on pointers

#include <stdio.h>

void main() {
	int x = 20;
	int y = 30;
	int *iptr1 = &x;
	int *iptr2 = &y;
	if (iptr1!=iptr2){
		printf("True\n");
	}else{
		printf("False");
	}
}
