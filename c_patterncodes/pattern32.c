#include <stdio.h>
void main () {
	for (int row = 1; row<=5; row++){
		int x = 5;
		for(int col = 1; col<=5; col++){
			printf("%d ", x);
			x--;
		}
		printf("\n");
	}
}
