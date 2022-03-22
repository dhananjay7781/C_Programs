#include <stdio.h>

void main() {
	int x = 339;
	int ans;
	ans = ++x + x++ + x++;
	printf("%d %d\n" , x , ans);
}
