#include <stdio.h>
void main() {
	int x = 10;
	switch(x) {
		case 10 : 
			printf("Ten\n");
		case 5 + 5 : 
			printf("Ten\n");
		case 6 + 4 : 
			printf("Ten\n");
	}
}

//error yetil karan switch mdhe double case value nhi chalat so te 6 + 4 la suddha add krel n error yeil 
