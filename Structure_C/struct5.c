#include <stdio.h>
#include <string.h>
struct Book {
	char bName[20];
	char authorName[20];
	int pages;
	double price;
}myBook = {"XYZ","PQR",200,350.50};

void main() {
	struct Book book = {"Two states", "Chetan Bhagat",350,220.50};
	struct Book bk;
	printf("%p\n",myBook);
	printf("%p\n",book);
	printf("%p\n",bk);
	strcpy(bk.bName,"comp-CJP");
	strcpy(bk.authorName,"Swatah");
	bk.pages = 20;
	bk.price = 0.0;
	printf("%s\n",bk.bName);
	printf("%s\n",bk.authorName);
	printf("%d\n",bk.pages);
	printf("%lf\n",bk.price);
	printf("%s\n",book.bName);
	printf("%s\n",book.authorName);
	printf("%d\n",book.pages);
	printf("%lf\n",book.price);
}
