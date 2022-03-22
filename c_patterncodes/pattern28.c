#include <stdio.h>

void fun() {
	int n;
	int m;
	scanf("%d", &n);
	m = n;
	for(int i =1; i<=m; i++){
		for(int j= 1; j<=n*2; j++){
			printf("1 ");
		}
		n--;

		printf("\n");
	}
	
}



int main(){
	fun();
	return 0;
}
