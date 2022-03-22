#include <stdio.h>
#include <stdlib.h>

void fun() {
	int *iptr = (int*)malloc(3*sizeof(int));
	for(int i=0;i<3;i++){
		*(iptr+i)=10*(i+1);
	}
	for(int i=0;i<3;i++){
		printf("%d\n",*(iptr+i));
	}
	free(iptr);
}
void gun() {
	int *iptr1 = (int*)calloc(3,sizeof(int));
	for(int i=0;i<3;i++){
		*(iptr1+i)=40*(i+1);
	}
	for(int i=0;i<3;i++){
		printf("%d\n",*(iptr1+i));
	}
	free(iptr1);
}
void main() {
	printf("Befor Fun\n");
	fun();
	printf("After Fun\n");
	printf("Befor gun\n");
	gun();
	printf("After gun\n");
}
