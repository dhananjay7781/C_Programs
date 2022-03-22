#include <stdio.h>
void main(int argc,char* argv[]) {
	for(int i=0; i< argc; i++){
		printf("%p\n",&argv[i]);
	//	printf("%s\n",argv[i]);
	}
}
//8 -8 ne difference aslele adress print hotil karan te pointer ahet ./a.out pasun pudhe
