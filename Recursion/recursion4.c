#include <stdio.h>

int sum = 0;
int sumnum(int x) {
	if (x >=0){
		sum = sum + x;
		x--;
		sumnum(x);
	}
	return sum;
}
void main() {
	int ret = sumnum(10);
	printf("%d\n",ret);
}
