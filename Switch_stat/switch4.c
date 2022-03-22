#include <stdio.h>

void main () {
	int x = 4;
	switch (x){
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("Numbers\n");
		break;
	default:
		printf("IN DEFAULT\n");
		break;
	}
}
