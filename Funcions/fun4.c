#include <stdio.h>
void gun(int *iptr1){

	printf("In Gun\n");
	printf("%p\n", iptr1);
	printf("%d\n", *iptr1);
	fun(&iptr1);
}
void fun(int **iptr2){

	printf("In Fun\n");
	printf("%p\n", iptr2);
	printf("%d\n", *iptr2);
}
void main() {
	int x;
	printf("In Main\n");
	scanf("%d", &x);
	gun(&x);
}
