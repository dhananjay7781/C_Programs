#include <stdio.h>
void main() {
	char *str = "Dhananjay";
	printf("%p\n",str);
	printf("%c\n",*str);
	str++;
	printf("%p\n",str);
	printf("%c\n",*str);
	printf("%s\n",str);
}

//ith last la hananjay output yeil karan str++ kelay apan so to to ata 101 hya adrees la bghtoy so tithun pudch vachel
