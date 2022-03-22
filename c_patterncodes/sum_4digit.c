#include <stdio.h>
void main() {
	int x =9437;
	int sum = 0;
	int rem = 0;
	while(x!=0){
		rem = x%10;
		x = x / 10;
		sum = sum + rem;
		printf("%d\n", sum);
	}
}
