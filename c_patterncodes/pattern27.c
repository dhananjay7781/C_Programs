#include <stdio.h>

void main() {
	char ch = 'A';
	int x = 2;
	for(int row = 1; row<=3; row++){
		for(int col = 3; col>=row; col--){
		//	printf("%c ", ch);
			if(col == 3){
				printf("A ");
			}
			else if (col == 2){
				printf("%d ", x);
				x = x + 3;
			}
			else {
				printf("B ");
			}
			}	
		printf("\n");
		}
	//	printf("\n");
	
}
