//pointer to pointer data acses kela ahe
#include <stdio.h>

void main() {

	int x = 10;
	int y = 20;
	int z = 30;
	int *iptr1 = &x;
	int *iptr2 = &y;
	int *iptr3 = &z;

		
	int **ipptr1 = &iptr1;
	int **ipptr2 = &iptr2;
	int **ipptr3 = &iptr3;

	int iarr[3] = {x , y , z};
	int *iparr[3] = {iptr1 , iptr2 , iptr3};
	int **ipparr[3] = {ipptr1 , ipptr2 ,ipptr3 };
	for(int i = 0; i <=2; i++){
		printf("%d\n", *(iarr+i));                                     //arr[i] == *(arr + i)
	}
	printf("---------\n");
	for(int i = 0; i <=2; i++){
		printf("%d\n", *(iparr[i]));
	}
	printf("---------\n");
	for(int i = 0; i <=2; i++){
		printf("%d\n", *(*(ipparr[i])));
	}
	printf("---------\n");

}
