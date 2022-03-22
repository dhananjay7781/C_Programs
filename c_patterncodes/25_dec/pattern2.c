#include <stdio.h>	
void main() {
	char x = 'A';
	for (int row = 0; row < 3; row++){
		for (int col = 0; col<3; col++){
			printf(" %c ", x);
			x++;
		}
		printf("\n");
	}
}
