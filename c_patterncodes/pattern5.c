#include <stdio.h>
 void main() {
 	int x = 1;
	for (int row=1; row <=3; row++){
		for(int col=1; col<=3; col++){
			if(x%2==0)
			{
			printf("%d ", x);
			}else{
			printf(" * ");
			}
			x++;
		}
		printf("\n");
	}
	printf("x = %d\n", x);
 }
