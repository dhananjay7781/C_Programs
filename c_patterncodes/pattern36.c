#include <stdio.h>
void main() {
	//int ch = '65';
	for(int row=1; row<=5;row++){
		int ch = 65;
		for(int col=1; col<=row; col++){
			printf("%c ", ch);
			ch++;
		}
		printf("\n");
	}
}
