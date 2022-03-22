#include <stdio.h>

void main() {
	char carr[5] = {'D','H','A','N','U'};

	char *captr = carr;
	int *iaptr = carr;

	printf("%c\n", *captr);
	printf("%c\n", *iaptr);

	captr++;
	iaptr++;
	printf("%c\n", *captr);
	printf("%c\n", *iaptr); //ithe 4 ghar sarktat mhnje typecasting hoot n output U yet

}
