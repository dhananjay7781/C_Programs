#include <stdio.h>

void main() {
	int arr[5];
	int num;
	int num1;
	int temp;
	printf("Enter five nums: \n");
	for(int num=0; num< 5; num++){
		scanf("%d", &arr[num]);
	}
	for(int num=0; num< 5; num++){
		for(num1 = num +1; num1<5; num1++ ){
			if(arr[num] >arr[num1])
			{
				temp = arr[num];
				arr[num] = arr[num1];
				arr[num1]= temp;
			}
		}
	}
	printf("Ascending order is :  \n");
	for(int num = 0; num<5; num++){
		printf("%d\n", arr[num]);
	}
}
