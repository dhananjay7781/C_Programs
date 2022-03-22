#include <stdio.h>
#include <string.h>
int mystrlen(char* pstr){
	int count = 0;
	while(*pstr != 0){
		count++;
		pstr++;
	}
	return count;
}
void main() {
	/*library function
	char *str = "Shashi";
	printf("%d\n",strlen(str));  
	*/
	//my function
	char *str = "Shashi";
	printf("%d\n",mystrlen(str));
}
