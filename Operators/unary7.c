#include <stdio.h>

void main() {
	int x = 135;
	int ans;
	ans = ++x + x++;
	printf("%d %d\n", x, ans);
}
