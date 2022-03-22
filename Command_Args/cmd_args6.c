#include <stdio.h>
void main(int argc,char* argv[]) {
	for(int i=0; i< argc; i++){
		argv[i][0] = 'X';
		printf("%s\n",argv[i]);
	}
}

//initial la replace krel x ne
