#include <stdio.h>

void main() {
	char carr[5] = {'D','H','A','N','U'};
	char *captr = carr;
	for(int i=0; i<=4; i++){
			printf("%c\n", carr[i]);
	}
	for(int i=0; i<=4; i++){
			printf("%c\n", *(captr + i));
	}
}
