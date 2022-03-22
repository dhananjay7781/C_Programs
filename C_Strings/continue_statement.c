#include <stdio.h>
void main() {
	for (int i=1; i<=10; i++) {
		if( i == 3)
			continue;
		printf("%d\n",i);
	}
	printf("After loop\n");
}

//ithe 3 skip karel 
