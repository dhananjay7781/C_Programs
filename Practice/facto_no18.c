#include <stdio.h>
void main() {
	int x;
	int fact;
	int i =1;
	printf("Enter a number : \n");
	scanf("%d",&x);
	printf("%d\n",x);
//	int i =1;
	while(x >= 1){
		fact = x * i;
		i--;
	//	printf("Factorial is  : %d",fact);
	}
		printf("Factorial is  : %d",fact);

}
