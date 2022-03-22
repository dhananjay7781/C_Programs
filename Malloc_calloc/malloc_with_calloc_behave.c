#include <stdio.h>
#include <stdlib.h>


void main() 
{
	int *iptr = (int*)malloc(3*sizeof(int));
	for(int i=0;i<3;i++){
		*(iptr + i) = 10*(i+1);
	}
	for(int i=0;i<3;i++){
		printf("%d\n",*(iptr+i));
	}
}
