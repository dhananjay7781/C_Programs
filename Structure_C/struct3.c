#include <stdio.h>
#include <string.h>
struct Book {
	char bName[20];
	char authorName[20];
	int pages;
	double price;
}mybook = {"XYZ","per",200,350.50};

void main() {
	struct Book book = {"Two states", "Chetan Bhagat",350,220.50};
	printf("%p\n",mybook);
	printf("%p\n",book);
	printf("%s\n",mybook.bName);
	printf("%s\n",mybook.authorName);
	printf("%d\n",mybook.pages);
	printf("%lf\n",mybook.price);
}
