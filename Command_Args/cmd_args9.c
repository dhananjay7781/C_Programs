#include <stdio.h>
void main(int argc,char* argv[]) {
	argv[0] = argv[1];
	printf("%s\n",argv[0]);
}

