#include <stdio.h>
void main(){
	int x;
	x =10;
	int y;
	y =20;
	printf("%d,%d\n", x,y);

	x = x + y;
	printf("%d\n", x);

	y = x + y;
	printf("%d\n", y);



}

// y + x = y; kel tr error yeto tela lvalue error mhjntat karan left side la kayam location ast mhnje container so ekach variable assign krych ast so......
// 10 = y; jari kel tri erro yeil karan tela container pahije
