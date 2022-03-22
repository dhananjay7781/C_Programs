#include <stdio.h>
union Book {
	char bname[20];
	char aname[20];
	int pages;
	double price;
};

void main() {
	union Book bk = {"Os","AG",250,350.548};
	printf("%ld\n",sizeof(bk));

	printf("%p\n",&bk.bname);
	printf("%p\n",&bk.aname);
	printf("%p\n",&bk.pages);
	printf("%p\n",&bk.price);
}


