#include <stdio.h>
void main() {
int x = 5;
	for (int row = 1; row<=5; row++) {
//	int x = 5;
                     
		for(int col = 5; col>=1; col--){
			printf("%d ", x);
		//i	x--;
		 col--;
		}
			x--;
		printf("\n");
	}
}
