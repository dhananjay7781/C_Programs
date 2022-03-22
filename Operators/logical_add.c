#include <stdio.h>
int main(void) {
	int x;
	printf("Enter the number :\n");
	scanf("%d", &x);
	if((x%5 == 0)||(x%4 == 0)){
		printf("the number is divisible by 4 or 5\n");
	}else{
		printf("the number is not divisible by 4 or 5\n");
	}
}
