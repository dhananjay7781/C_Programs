#include <stdio.h>

void main() {
	char *str = "Shashi";
	printf("%p\n",str); //adress
	printf("%c\n",*str); //S
	printf("%s\n",str); //Shashi
	str++;
	printf("%p\n",str);   //adress
	printf("%c\n",*str);  //h
	printf("%s\n",str);  //hashi
}
