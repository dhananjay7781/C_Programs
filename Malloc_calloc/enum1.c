#include <stdio.h>

enum Day {Mon,tue,wed = 5,thu,fri,sat,sun};

void main() {
	printf("%d\n",tue);
	printf("%d\n",wed);
	printf("%d\n",thu);
	printf("%ld\n",sizeof(enum Day));
}
