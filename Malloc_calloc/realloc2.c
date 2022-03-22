#include <stdio.h>
#include <stdlib.h>

//realloc mhnje balkavleli jaga ahe
void main() 
{
	int *iptr = (int*)calloc(3,sizeof(int));
	for(int i=0;i<3;i++){
		*(iptr + i) = 10*(i+1);
	}
	for(int i=0;i<3;i++){
		printf("%d\n",*(iptr+i));
	
	}
	printf("%p\n",iptr);

	int *rptr =(int*)realloc(iptr,3); 
	*(iptr+3) = 40;
	*(iptr+4) = 50;
	printf("%p\n",rptr);
	for(int i=0;i<5;i++){
		printf("%d\n",*(iptr+i));
	}
}
