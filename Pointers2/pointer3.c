//array of pointers
#include <stdio.h>

void main() {
	//int *iptr[3] = {iptr1, iptr2, iptr3};

	char ch1 = 'A';
	char ch2 = 'B';
	char ch3 = 'C';
	char *cptr1 = &ch1;
	char *cptr2 = &ch2;
	char *cptr3 = &ch3;
	char *carr[3] = {cptr1 ,cptr2, cptr3};
	for (int i = 0; i <=2; i++){
	
		printf("%p\n", carr[i]);
		printf("%d\n", *(carr[i]));
	}
}
