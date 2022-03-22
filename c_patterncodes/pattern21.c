#include <stdio.h>

int main (void){
	char ch = '99';
	for(int row=0; row<3; row--){
		for(int col=0; col<=row; col++) {
			printf("%c ", ch);
			ch--;
		}
	}
	
	return 0;
}
