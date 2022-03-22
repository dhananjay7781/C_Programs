#include <stdio.h>
void main(){
	char ch = 'a';
	for(int row=0; row<3; row++){
		for(int col=0; col<=row; col++){
			printf("%c ", ch);
			ch = ch + 3;
		}
		printf("\n");
	}
}
