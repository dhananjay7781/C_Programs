#include <stdio.h>
struct Book {
	char bname[20];
	char aname[20];
	int pages;
	double price;
};

void main() {
	struct Book bk = {"Os","AG",250,350.548};
	struct Book bk1 = {"Os","AG",250,350.548};
	printf("%p\n",&bk.bname);
	printf("%p\n",&bk.aname);
	printf("%p\n",&bk.pages);
	printf("%p\n",&bk.price);

	printf("%p\n",&bk1.bname);
	printf("%p\n",&bk1.aname);
	printf("%p\n",&bk1.pages);
	printf("%p\n",&bk1.price);
}
