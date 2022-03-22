#include <stdio.h>
void main() {
	//usser kadunn input ghetana priblem yetoy space chya pudhchc nhi print hot so option bgha
	char *str;
	char carr[15];
	printf("Enter a string : \n");
	//option 1
	scanf("%[^\n]",carr);
	printf("%s\n",carr);
	//option  2 gets vaprly
	gets(carr);
	printf("%s\n",carr);
	//option 3 fgets
	fgets(carr,15,stdin);
	printf("%s\n",carr);

}
