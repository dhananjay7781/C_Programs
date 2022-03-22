#include <stdio.h>
void main () {
	for(int row = 1; row<=5; row++){
		int x = 1;
		for(int col = 1; col<=row; col++){
			printf("%d ", x);
			x++;
		}
		printf("\n");
	}
}
