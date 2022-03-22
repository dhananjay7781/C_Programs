
#include <stdio.h>	
void main() {
	int x = 1;
	for (int row = 0; row < 3; row++){
		for (int col = 0; col<3; col++){
			printf(" %d", x);
			x++;
		}
		printf("\n");
	}
}
