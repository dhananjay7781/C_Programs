#include <stdio.h>
#include <string.h>
void main() {
	char str1[] = {'C','O','R','E','\0'};
	char str2[] = {'2','W','E','B','\0'};
	strcpy(str2,str1);
	printf("%s\n",str1);
	printf("%s\n",str2);
//	printf("%c\n",str2);
}
