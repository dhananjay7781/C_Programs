#include <stdio.h>
void main() {
	int x= 72;
	int ans;

	ans = ++x + ++x;

	printf("%d %d\n", x , ans);
}
