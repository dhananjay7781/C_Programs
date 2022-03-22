#include <stdio.h>

void main() {
	int x = 20;
	int *iptr1;
	int *iptr2;
	 iptr1 = &x;
	 iptr2 = &x;
	
	 printf("%d %p %p\n", x , iptr1, iptr2);  //20 and 20 cha adress jo ki same asnaer dofhancha pn eg 20 100 100
	
	 x= 30;
	 int *iptr3;
	 iptr1 = &x;
	 iptr2 = &x;
	 iptr3 = &x;
	 printf("%d %p %p %p\n", x , iptr1, iptr2);  //20 and 20 cha adress jo ki same asnaer dofhancha pn eg: 20 100 100
	
}
