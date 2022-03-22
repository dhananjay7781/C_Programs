#include <stdio.h>

void main() {
	//int x = 1;
	for(int row=1; row<=5; row++){
		for(int col = 1; col<=row; col++){
			printf("%d ", row);
		}
	//	x++;
		printf("\n");
	}	
}
