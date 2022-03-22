#include <stdio.h>

void main() {
	char ch = 67;
	for(int row = 1; row<=3; row++){
		for(int col=3 ; col>=row; col--){
			printf("%c ", ch);
			ch--;
		}
		ch = 67 - row;
	printf("\n");
	}
}
