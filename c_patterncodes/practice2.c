#include <stdio.h> 
void main() {
	char ch = 97;
	for(int row = 1;row<=3;row++) {
		for(int col=1;col<=row;col++) {
			printf(" %c ",ch);
			ch = ch + 3;
		}
		printf("\n");
	}
}
