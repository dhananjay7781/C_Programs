#include <stdio.h>
int arr[3][3];
int n;
void main() {
	for(int i=0; i<=2; i++){
		for(int j=0;j<=2;j++){
			scanf("%d",&(arr[i][j]));
		}
	}
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			if(arr[i][j] % 4 ==0 && arr[i][j] % 5 ==0){
				printf("%d ",arr[i][j]);
			}else{
				printf("0 ");
			}
		}
		printf("\n");
	}
}
