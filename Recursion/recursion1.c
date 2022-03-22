#include <stdio.h>
int cnt = 0;
void fun() {
	printf("In fun : %d\n", cnt);
	cnt ++;
	fun();
}
void main () {
	fun();
}
