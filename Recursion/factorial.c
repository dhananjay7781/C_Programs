#include <stdio.h>
int fact = 1;
int factorial(int x) {
	for(int i = 5; i>=0; i--){
		fact = fact * i;
	}
}
void main() {
	factorial();
	printf("%d\n",fact);
}
