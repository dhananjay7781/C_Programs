#include <stdio.h>
void main() {
		//char ch = 'A';
		for(int row=3; row>=0; row--){
		char ch = 'A';
			for(int col=0; col<=row; col++){
				printf("%c ", ch);
				ch++;
			}
			printf("\n");
		}	

}











