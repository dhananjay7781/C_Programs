#include <stdio.h>
#include <string.h>
struct Book {
	char bName[20];
	char authorName[20];
	int pages;
	double price;
};

void main() {
	struct Book book = {"Two states", "Chetan Bhagat",350,220.50};
	struct Book bk;
	strcpy(bk.bName,"comp-CJP");
	strcpy(bk.authorName,"Swatah");
	bk.pages = 20;
	bk.price = 0.0;
	printf("%s\n",bk.bName);
	printf("%s\n",bk.authorName);
	printf("%d\n",bk.pages);
	printf("%lf\n",bk.price);
}
