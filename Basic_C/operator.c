#include <stdio.h>
void main() {
	int x = 10;
	printf("%d\n", x);
	--x;
	printf("%d\n", x);
	x--;
	printf("%d\n", x);
	x = --x - x--;
	printf("%d\n", x);
}
