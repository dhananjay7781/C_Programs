#include <stdio.h>

int main(void) {
	int x;
	printf("Enter a number : \n");
	scanf("%d", &x);
	if (x%2 == 0){
		printf("The no is divisible by 2\n");
	}
	else{
		printf("The number is not divisible\n");
	}
	return 0;
}
