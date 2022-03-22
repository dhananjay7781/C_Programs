#include <stdio.h>

void main() {
	int dividend,divisor,quotient,reminder;
	printf("Enter no:");
	scanf("%d", &dividend);
	printf("Enter no:");
	scanf("%d", &divisor);
	quotient = dividend / divisor;
	reminder = dividend % divisor;
	printf("%d\n", quotient); 
	printf("%d\n", reminder); 

}
