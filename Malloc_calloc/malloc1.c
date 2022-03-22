#include <stdio.h>
#include <malloc.h>

void main() {
	int* iptr = (int*)malloc(sizeof(int));
	           /* OR */
	/*void *vptr = malloc(sizeof(int));
	      int *iptr = (int*)vptr;  */
	printf("%d\n",*iptr);

	*iptr = 20;
	printf("%d\n",*iptr);

}






//malloc cha return type void* ahe pn aat mdhe apan int dilay so typecast karav lagel mhnun int* ani typecast kelay hyat
