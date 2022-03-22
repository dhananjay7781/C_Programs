#include <stdio.h>
void main() {
	int x = 1;
	for(int row=1; row<=4; row++){
		for(int col=1; col<=row; col++)
		
		{
			if (col <= row){
		//	printf("%d ", x);
			x = x + 1;
			printf("%d ", x);
			}else{
				printf("%d ", x);
			}
		}
		printf("\n");
	}
}
