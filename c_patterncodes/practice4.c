#include <stdio.h> 
void main() {
	for(int row = 1;row<=3;row++) {
		char ch = 65;
		for(int col=1;col<=row;col++) {
			printf(" %c ",ch);
			ch++;	
		}
		printf("\n");
	}
}
