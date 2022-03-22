#include <stdio.h>
int sumnum (int x) {
	int sum = 0;
	for (int i = 1; i<=x; i++){
		sum = sum + i;
	}
	return sum;
}
void main () {
	int ret = sumnum(10);
	printf("%d\n",ret);
}
