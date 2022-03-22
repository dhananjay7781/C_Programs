#include <stdio.h>
#include <string.h>
void main() {
	char carr[] = {'D','H','A','N','U'};
	char *str = "Dhananjay";
	printf("%ld\n",sizeof(carr)); //5
	printf("%ld\n",sizeof(str)); //8
	
	printf("%ld\n",strlen(carr)); //5
	printf("%ld\n",strlen(str)); //8
}
