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

//	*(iptr+4) = 50;                                      // 
	int *rptr =(int*)realloc(iptr,3); 
	*(iptr+3) = 40;
	*(iptr+4) = 50;
	printf("%p\n",rptr);
}

//realloc la 2 parameter lagtat 
//1 -> magcha pointer de jyapudhe aplyala add krychy
//2 -> kitine size vadhvychi sang
//across the stack frame te pointer tasach rahto stackframe pop zalevr mhnje dangling pointer
//
//
//
//
//magchya array chya pudhe jaga nasel mhnje memory nsel shillka tr realloc kel ki to sagla array uchlun dusrikde jatat ani tithla adress return krtat
