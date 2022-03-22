#include <stdio.h>

void main() {
	FILE *fp = fopen("demo.txt","r");
	char arr[20];
	fgets(arr,10,fp);            //ith jar tya text file chya peksha jast no takla mdhe tr stack smashed mhnun error yeto
	printf("%s\n",arr);
}
