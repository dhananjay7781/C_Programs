#include <stdio.h>
#include <string.h>
struct Book {
	char bname[30];
	char authorname[30];
	int pages;
	double price;
};
void main() {
	struct Book book = {"Two states","Chetan Bhagat",350,220.50};
	struct Book bk;
	strcpy(bk.bname,"Comp-CJP");
	strcpy(bk.authorname,"Swatah");
	bk.pages = 20;
	bk.price = 0.0;
	printf("%s\n",bk.bname);
	printf("%s\n",bk.authorname);
	printf("%d\n",bk.pages);
	printf("%lf\n",bk.price);
	printf("//////////////////////////////////\n");
	printf("%s\n",book.bname);
	printf("%s\n",book.authorname);
	printf("%d\n",book.pages);
	printf("%lf\n",book.price);
}
