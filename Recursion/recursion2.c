#include <stdio.h>
int cnt = 0;
void fun() {
	cnt ++;
	printf("In Fun : %d\n", cnt);
	while (cnt < 10) {
		fun();
	}
}
void main () {
	fun();
}
