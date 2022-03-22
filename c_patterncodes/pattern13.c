#include <stdio.h>
void main() {
	int x = 1;
	for(int row=1; row<=3; row++){
		for(int col=1; col<=row; col++){
			printf("%d ", x*x);
			x++;
		}
		printf("\n");
		
	}
}
