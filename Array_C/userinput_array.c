#include <stdio.h>

void main () {
	int arr[5];
	int num;
	int count =  0;
	printf("Enter 5 nums: \n");
	for (int num=0; num<5; num++) {
		scanf("%d", &arr[num]);
		
	}
	for (int num=0; num<5; num++) {
		if (num % 2 ==0 ){
			printf("%d ", arr[num]);
		}else{
			printf(" 0 ");
			count++;
	}

	}
	printf("the zeros are : %d\n ", count);	
} 
