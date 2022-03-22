#include <stdio.h>

struct Book {
	char book_name[20];
	char author_book[20];
	char book_publication[20];
	int book_noofpages;
	double book_price;
}books = {"Rich Dad Poor Dad","Robert Kiyosaki","Plata Publishing",354,207.50};

void main() {
	struct Book *bkptr = &books;
	printf("%s\n",bkptr->book_name);
	printf("%s\n",bkptr->author_book);
	printf("%s\n",(*bkptr).book_publication);
	printf("%d\n",books.book_noofpages);
	printf("%lf\n",bkptr->book_price);
}
