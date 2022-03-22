#include <stdio.h>
union Book {
	char bname[20];
	char aname[20];
	int pages;
	double price;
};

void main() {
	union Book bk = {"Os","AG",250,350.548};
	printf("%p\n",&bk.bname);
	printf("%p\n",&bk.aname);
	printf("%p\n",&bk.pages);
	printf("%p\n",&bk.price);
}

//ith union la ekach value lagte jar adrees print kele tr saglyanche same yetil.............
//mg to kon moth ahe techa adress ghet
