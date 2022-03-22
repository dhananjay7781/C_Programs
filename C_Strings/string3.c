#include <stdio.h>
#include <string.h>


void main() {
	char carr[] = {'A','B','C','D','\0'};
	char *str = "ABCD";
	printf("%ld\n",sizeof(carr));
	printf("%ld\n",sizeof(str));
	printf("%ld\n",strlen(carr));
	printf("%ld\n",strlen(str));
}
