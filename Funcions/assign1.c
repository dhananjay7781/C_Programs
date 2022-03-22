#include <stdio.h>


void run (char **cptr2, int **iptr2){

	printf("In Run\n");
	printf("%p %p\n", cptr2, iptr2);
	printf("%c %d\n", **cptr2, **iptr2);

}

void fun(int *iptr , char *cptr){

	printf("In fun\n");
	printf("%p %p\n", iptr, cptr);
	printf("%d %c\n", *iptr, *cptr);
	run(&cptr, &iptr);
}



void gun(int x , char ch){
	
	printf("In Gun\n");
	printf("%d %c\n", x, ch);
	fun(&x, &ch);
}
void main () {
	int x;
	char ch;
	printf("In main\n");
	printf("Enter The number and the character: \n");                                               
	scanf("%d %c", &x, &ch); 
	printf("You have entered %d as integer and %c as character \n", x , ch);            
	gun(x ,ch);                                                                       

}
