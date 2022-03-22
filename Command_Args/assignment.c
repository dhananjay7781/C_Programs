#include <stdio.h>
void main() {
	char frnds[4][7];
	printf("Enter strings :\n");
	for(int row=0; row<5; row++){
		for(int col=0; col<8; col++){
			scanf("%s",&frnds[row]);
		}
	}
	for(int row=0; row<5; row++){
		for(int col=0; col<8; col++){
			printf("%s\n",&frnds[row]);
		}
	}
}
