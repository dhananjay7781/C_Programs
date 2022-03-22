#include <stdio.h>
#include <string.h>
union Book {
	char bname[20];
	char aname[20];
	int pages;
	double price;
};

void main() {
	union Book bk; //= {"Os","AG",250,350.548};
	
	strcpy(bk.bname,"OS");
	printf("%s\n",bk.bname);

	strcpy(bk.aname, "AG");
	printf("%s\n",bk.aname);

	bk.pages = 250;
	printf("%d\n",bk.pages);

	bk.price = 150.256;
	printf("%lf\n",bk.price);
}


