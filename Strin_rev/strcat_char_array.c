#include <stdio.h>
#include <string.h>
void main() {
	char carr1[10] = {'D','H','A','N','U'};  //size dyavi lagte nhitr stack smashed
	char carr2[] = {'P','A','T','I','L','\0'};  //jar size nhi dili tr \0 takych 
	char *str = strcat(carr1,carr2);
	printf("%s\n",str);
}
