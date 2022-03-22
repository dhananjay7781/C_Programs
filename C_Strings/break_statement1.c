#include <stdio.h>

void main() {
	for(int i=1; i<=10;i++){
		printf("%d\n",i);
		if (i==3)
			break;
	}
	printf("After loop\n");
}
