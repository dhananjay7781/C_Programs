#include <stdio.h>

void main () {
	int x = 10;        // global scope
	int y = 20;       // global scope
	void fun() {
		printf("%d %d\n",x,y);
	}
	{
	int x = 20 , y = 30;   //local scope                                      
	printf("%d %d\n",x,y);
	}
	{
		int x = 40;   //block scope
		int y= 50;     //block scope
		printf("%d %d\n",x,y);
	}
}
